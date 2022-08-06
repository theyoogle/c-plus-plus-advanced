
#include<iostream>
using namespace std;

class Animal {
public:
    void speak() {
        cout << "Animal speaking." << endl;
    }
};

class Cat: public Animal {
public:
    void speak() {
        cout << "Cat speaking." << endl;
    }
};

class Tiger: public Cat {
public:
    void speak() {
        cout << "Tiger speaking." << endl;
    }
};


int main() {
    Animal* animal = new Cat;
    animal->speak();            // Animal speaking.

    delete animal;
    return 0;
}