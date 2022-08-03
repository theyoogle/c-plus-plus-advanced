
#ifndef CAT_H_
#define CAT_H_

#include<iostream>
using namespace std;

class Cat {
public:
    // Constructor
    Cat();
    // Destructor
    ~Cat();

    void speak();
private:
    bool happy;
};

#endif