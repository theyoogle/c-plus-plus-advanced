
#include <iostream>
#include <thread>

using namespace std;

void run(int count) {
    while (count --> 0) {
        cout << count << " Hello" << endl;
    }
    cout << "Uploading...." << endl;
    this_thread::sleep_for(chrono::seconds(3));
    cout << "Uploaded...." << endl;
}

int main() {
    cout << "Aplication started...." << endl;

    thread t1(run, 10);
    t1.join();

    cout << "Aplication finished...." << endl;
    return 0;
}