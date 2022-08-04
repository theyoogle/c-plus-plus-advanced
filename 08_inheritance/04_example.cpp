
#include<iostream>
using namespace std;

class Machine {
private:
    int id;

public:
    Machine(int id): id(id) {
        cout << "Machine constructor called." << endl;
    }
};

class Vehicle: public Machine {
public:
    Vehicle(int id): Machine(id) {
        cout << "Vehicle constructor called." << endl;
    }
};

int main() {
    Vehicle vehicle(123);

    return 0;
}