
#include "Person.h"

Person::Person() {
    this->name = "John";
    this->age = 20;
}

Person::Person(string name) {
    this->name = name;
    this->age = 0;
}

// Initialization List
Person::Person(string name, int age): name(name), age(age) {
    // this->name = name;
    // this->age = age;
}

Person::~Person() {

}

string Person::toString() {
    stringstream ss;
    ss << "Name: " << this->name << endl;
    ss << "Age: " << this->age << endl;
    ss << "this-> " << this;
    return ss.str();
}