
#ifndef PERSON_H_
#define PERSON_H_

#include<iostream>
#include<sstream>
using namespace std;

class Person {
public:
    Person();
    Person(string name);
    Person(string name, int age);

    ~Person();

    string toString();
private:
    string name;
    int age;
};

#endif