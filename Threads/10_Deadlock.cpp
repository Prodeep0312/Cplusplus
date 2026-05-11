#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>

std::mutex m1;
std::mutex m2;

//To avoid deadlock , use mutex in same order
void function1(){

    m1.lock();
    std::this_thread::sleep_for(std::chrono::seconds(1));
    m2.lock();
    std::cout<<"Critical section of thread 1"<<std::endl;
    m1.unlock();
    m2.unlock();
}

void function2(){
    m2.lock();
    std::this_thread::sleep_for(std::chrono::seconds(1));
    m1.lock();
    std::cout<<"Critical section of thread 2"<<std::endl;
    m2.unlock();
    m1.unlock();
}

int main(){
    std::thread t1(function1);
    std::thread t2(function2);

    t1.join();
    t2.join();
    return 0;
}