// TOPIC: Producer/Consumer OR Bounded Buffer Problem In C++11 Threading

// THE PROBLEM STATEMENT:
// 1. Producer will produce and consumer will consume with synchronization of a common buffer.
// 2. Until producer thread produces any data consumer thread can't consume.
// 3. Threads will use condition_variable to notify each other.
// 4. We need mutex if we use condition_variable because CV waits on mutex.
// 5. This is one of the example of producer consumer there are many.

// PRODUCER thread steps:
// 1. lock mutex, if success then go ahead otherwise wait for mutex to get free.
// 2. check if buffer is full and if it is full then unlock mutex and sleep, if not then go ahead and produce.
// 3. insert item in buffer.
// 4. unlock mutex. 
// 5. notify consumer.

// CONSUMER thread steps:
// 1. lock mutex, if success then go ahead and consume otherwise wait for mutex to get free.
// 2. check if buffer is empty and if it is, then unlock the mutex and sleep, if not thean go ahead and consume.
// 3. consume item from buffer.
// 4. unlock mutex.
// 5. notify producer.

// IMP:
// If you are talking about producer consumer then they have to notify each other.

#include<thread>
#include<iostream>
#include<condition_variable>
#include <deque>
#include<mutex>

// using namespace std;

std::deque<int>buffer;
std::mutex m1;
std::condition_variable cv;
const int buffer_size =50;

void produce(int val){

    while(val){
        std::unique_lock<std::mutex> ul(m1);
        cv.wait(ul,[](){ return buffer.size() < buffer_size ;});  //if true proceed ..else wait
        buffer.push_back(val);
        std::cout<<"Produced : "<<val<<std::endl;
        val--;
        ul.unlock();
        cv.notify_one();


    }
}

void consume(){
    while ((true)){
        std::unique_lock<std::mutex> ul(m1);
        cv.wait(ul,[](){ return buffer.size() > 0 ;});
        int value=buffer.back();
        buffer.pop_back();
        std::cout<<"Consumed: "<<value<<std::endl;
        ul.unlock();
        cv.notify_one();
        
    }

    
}

int main()
{
    std::thread t1(produce,100);
    std::thread t2(consume);

    t1.join();
    t2.join();

    return 0;
}