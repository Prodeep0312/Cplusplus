#include<thread>
#include<iostream>
#include<mutex>
#include<condition_variable>
#include<chrono>

int balance=0;
std::mutex m1;
std::condition_variable cv;


void withdraw(int amount){

     std::cout<<"Inside withdraw"<<std::endl;
 std::unique_lock<std::mutex> ul(m1);
    cv.wait(ul,[](){ return balance > 0 ; });

    if(balance>=amount){
        balance-=amount;
        std::cout<<"Account balance after withdraw :"<<balance<<std::endl;
    }else{
        std::cout<<" Withdrawal not possible for: "<<amount<<std::endl;
    }

    ul.unlock();
    cv.notify_one();
}

void deposit(int amount){
   
     std::unique_lock<std::mutex> ul(m1);
     balance+=amount;
     std::cout<<"Account balance after deposit: "<<balance<<std::endl;
     ul.unlock();
     cv.notify_one();


}

int main(){

    std::thread t1(withdraw,400);
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::thread t2(deposit,500);

    t1.join();
    t2.join();

    return 0;

}