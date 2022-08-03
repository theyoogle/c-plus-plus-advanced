
#include<iostream>
#include<sstream>

using namespace std;

int main() {
    string name = "John";
    int age = 12;

    stringstream ss;
    ss << "Name is: " << name << endl;
    ss << "Age is: " << age;

    cout << ss.str() << endl;

    return 0;
}