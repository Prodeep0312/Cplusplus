#include<thread>
#include<iostream>
#include<atomic>

std::atomic<int>counter=0;
//int counter=0;
//If we want to avoid using mutex for small operations , we use atomic variable which ensures only one thread operates on it at a time
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
