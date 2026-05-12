#include<thread>
#include<iostream>
#include<atomic>

std::atomic<int>counter=0;
//int counter=0;

void run(){
    for(int i=1;i<=100000;i++){
        counter++;
    }
}
int main(){

    std::thread t1(run);
    std::thread t2(run);  

    t1.join();
    t2.join();

    std::cout<<"Counter : "<<counter<<std::endl;
}