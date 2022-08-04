
#include<iostream>
using namespace std;

class Machine {
public:
    Machine() {
        cout << "Machine no-argument constructor called." << endl;
    }
};

class Vehicle: public Machine {
public:
    Vehicle() {
        cout << "Vehicle no-argument constructor called." << endl;
    }
};

int main() {
    Vehicle vehicle;

    return 0;
}