
#include<iostream>

using namespace std;

int main() {
    int value = 10000000000;
    cout << value << endl;

    cout << "INT_MIN: " << INT_MIN << endl;
    cout << "INT_MAX: " << INT_MAX << endl;

    cout << "size(short): "     << sizeof(short) * 8     << endl;
    cout << "size(int): "       << sizeof(int) * 8       << endl;
    cout << "size(long): "      << sizeof(long) * 8      << endl;
    cout << "size(long long): " << sizeof(long long) * 8 << endl;

    cout << "size(unsigned int): " << sizeof(unsigned int) * 8 << endl;
    return 0;
}