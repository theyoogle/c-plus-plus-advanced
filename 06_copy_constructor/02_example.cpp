
#include<iostream>
using namespace std;

class Animal {
private:
    string name;
    
public:
    Animal() {
        cout << "Animal created." << endl;
    }

    Animal(const Animal& other) {
        cout << "Animal created by copy." << endl;
        this->name = other.name;    // manual copy
    }

    void setName(string name) {
        this->name = name;
    }

    void speak() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Animal animal1;
    animal1.setName("Cat");

    Animal animal2 = animal1;
    
    animal1.speak();
    animal2.speak();

    return 0;
}