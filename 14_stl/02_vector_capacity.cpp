
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> nums(10);
    cout << "Size: " << nums.size() << endl;
    cout << "Capacity: " << nums.capacity() << endl;

    int capacity = nums.capacity();
    for (int i=0; i<10000; i++) {
        if (capacity != nums.capacity()) {
            capacity = nums.capacity();
            cout << "Capacity: " << nums.capacity() << endl;
        }

        nums.push_back(i);
    }

    return 0;
}
