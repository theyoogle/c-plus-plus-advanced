
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
    Animal* animal = new Animal();
    animal->setName("Cat");
    animal->speak();

    // Always call delete on pointers created with new
    delete animal;

    return 0;
}