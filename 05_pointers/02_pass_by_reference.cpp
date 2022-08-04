
#include<iostream>
using namespace std;

void change(int* ptr) {
    *ptr = 999;
}

int main() {
    int age = 100;

    cout << age << endl;
    change(&age);
    cout << age << endl;

    return 0;
}