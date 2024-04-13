#include <iostream>
using namespace std;

class B;

// --------------------
class A {
private:
    int number;
    
public:
    A (int n) {
        this->number = n;
    }
    
    friend void bridge(A a, B b);
};

// --------------------
class B {
private:
    int number;
    
public:
    B (int n) {
        this->number = n;
    }
    
    friend void bridge(A a, B b);
};

// --------------------
void bridge(A a, B b) {
    cout << "A.number = " << a.number << endl;
    cout << "B.number = " << b.number << endl;
    cout << "Sum = " << a.number + b.number << endl;
}

// --------------------
void run()
{
    A a(10);
    B b(20);
    
    bridge(a, b);
}
