// TOPIC: std::future and std::promise in threading.

// NOTES:
// 1. std::promise (setter)
//      a. Used to set values or exceptions.
// 2. std::future (getter)
//      a. Used to get values from promise.
//      b. Ask promise if the value is available.
//      c. Wait for the promise.


#include<iostream>
#include<thread>
#include<future>
#include<algorithm>
typedef long int ull;

void findOddSum(std::promise<ull>oddSumPromise, ull start, ull end){
    ull oddS=0;

    for(ull i=start;i<=end;i++)
    {
        if(i & 1)
        {
            oddS+=i;
        }
    }

    oddSumPromise.set_value(oddS);

}

int main(){
    ull start=0;
    ull end= 1900000000;
    std::promise<ull>oddSum;
    std::future<ull>oddSumF=oddSum.get_future();

    std::thread t1(findOddSum, std::move(oddSum),start,end);
    std::cout<<"Thread object created !!"<<std::endl;

    std::cout<<"Waiting for result..."<<std::endl;

    //Suppose function->3 seconds and after line 42 it takes 5 seconds for some execution
    //if no threads used time->3+5=8 seconds
    //with threads time->5s as result from func is immediately available
    std::cout<<"Odd sum is : "<<oddSumF.get()<<std::endl;

    std::cout<<"Completed!"<<std::endl;

    t1.join();

    return 0;

}