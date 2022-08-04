
#include<iostream>
using namespace std;

int main() {
    int age = 100;

    // Pointer to an Int
    int* ptr = &age;

    cout << "Address: " << ptr << endl;
    cout << "Dereference: " << *ptr << endl;

    cout << "sizeof(ptr): " << sizeof(ptr) << endl;

    return 0;
}