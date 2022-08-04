
#include<iostream>
using namespace std;

class Animal {
private:
    string name;
    
public:
    Animal() {
        cout << "Animal created." << endl;
    }

    ~Animal() {
        cout << "Animal Destructor called." << endl;
    }

    void setName(string name) {
        this->name = name;
    }

    void speak() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Animal* animals = new Animal[10];
    delete[] animals;

    char* name = new char[100];
    delete[] name;

    return 0;
}