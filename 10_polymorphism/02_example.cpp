
#include<iostream>
using namespace std;

class Animal {
public:
    virtual void speak() = 0;
    virtual ~Animal() {};
};

class Cat: public Animal {
public:
    void speak() {
        cout << "Cat speaking." << endl;
    }

    virtual ~Cat() {}
};

class Tiger: public Cat {
public:
    void speak() {
        cout << "Tiger speaking." << endl;
    }

    virtual ~Tiger() {}
};


int main() {
    Animal* animal1 = new Cat;
    animal1->speak();            // Cat speaking.

    Animal* animal2 = new Tiger;
    animal2->speak();            // Tiger speaking.

    delete animal1;
    delete animal2;
    return 0;
}