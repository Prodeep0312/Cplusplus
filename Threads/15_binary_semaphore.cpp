#include<semaphore>
#include<thread>
#include<iostream>
#include <chrono>


// Main release        : 0 -> 1
// Thread acquire      : 1 -> 0

// Thread release      : 0 -> 1
// Main acquire        : 1 -> 0

std::binary_semaphore
    smphSignalMainToThread{0},
    smphSignalThreadToMain{0};

void ThreadProc()
{
    // wait for a signal from the main proc
    // by attempting to decrement the semaphore
    smphSignalMainToThread.acquire();
 
    // this call blocks until the semaphore's count
    // is increased from the main proc
    std::cout << "[thread] Got the signal\n"; // response message
 
    using namespace std::literals;
    std::this_thread::sleep_for(3s);
 
    std::cout << "[thread] Send the signal\n"; // message
 
    // signal the main proc back
    smphSignalThreadToMain.release();
}
 
int main()
{
    // create some worker thread
    std::thread thrWorker(ThreadProc);
 
    std::cout << "[main] Send the signal\n"; // message
 
    // signal the worker thread to start working
    // by increasing the semaphore's count
    smphSignalMainToThread.release();//cnt++
 
    // wait until the worker thread is done doing the work
    // by attempting to decrement the semaphore's count
    smphSignalThreadToMain.acquire();
 
    std::cout << "[main] Got the signal\n"; // response message
    thrWorker.join();
}