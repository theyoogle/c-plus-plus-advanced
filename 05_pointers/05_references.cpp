
#include<iostream>
using namespace std;

int main() {
    int value1 = 100;
    int &value2 = value1;
    value2 = 200;

    cout << "Value 1: " << value1 << endl;
    cout << "Value 2: " << value2 << endl;

    return 0;
}