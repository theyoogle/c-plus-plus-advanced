
#include<iostream>
using namespace std;

class Animal {
private:
    string name;
    
public:
    Animal() {
        cout << "Animal created." << endl;
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

    Animal animal2 = animal1;   // copy
    animal2.setName("Dog");
    
    animal1.speak();
    animal2.speak();

    return 0;
}