
#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

// Mutex: Mutual Exclusion

int amount = 0;
mutex m;

void addMoney() {
    m.lock();   // Blocking other threads here
    // Critical Section -----------
    for (int i=0; i<1000000; ++i) {
        ++amount;
    }
    // ----------------------------
    m.unlock();
}

int main() {
    cout << "Aplication started...." << endl;

    thread t1(addMoney);
    thread t2(addMoney);

    t1.join();
    t2.join();

    cout << amount << endl;

    cout << "Aplication finished...." << endl;
    return 0;
}