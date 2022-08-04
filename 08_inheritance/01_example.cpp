
#include<iostream>
using namespace std;

class Animal {
public:
    void speak() {
        cout << "Grrrr" << endl;
    }
};

class Cat: public Animal {

};

int main() {
    Cat cat;
    cat.speak();

    return 0;
}