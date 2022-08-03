
#include "Cat.h"

Cat::Cat() {
    cout << "Cat born..." << endl;
    happy = true;
}

Cat::~Cat() {
    cout << "Cat died..." << endl;
}

void Cat::speak() {
    if (happy) {
        cout << "Meouwww!!" << endl;
    } else {
        cout << "Sssssss" << endl;
    }

}