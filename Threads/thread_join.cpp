#include<thread>
#include<iostream>
#include<chrono>

using namespace std;

void run(int count){
    while(count>0){
    cout<<"Hello from thread t1"<<endl;
   
    count--;
    }
     this_thread::sleep_for(chrono::seconds(3));
}

int main(){

    cout<<"Starting main thread"<<endl;
    thread t1(run,10);
    t1.join();
    cout<<"Ending main thread"<<endl;
    return 0;
}