#include<iostream>
#include<thread>

using namespace std;

void print(string msg, int count){
    for(int i=1;i<=count;i++){
        cout<<msg<<" "<<i<<endl;
    }
}

int main(){

    thread t1(print,"Hello",5);
    thread t2(print , "Bye",5);

    t1.join();
    t2.join();
    //main thread will now wait for t1 and t2 thread to finish their execution    

    cout<<"Program / main thread terminating ..."<<endl;
    return 0;
}