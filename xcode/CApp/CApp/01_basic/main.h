#include <iostream>
using namespace std;

// --------------------
class Square
{
public:
    void draw() {
        cout << "SQUARE drawn" << endl;
    }
};

// --------------------
class Circle
{
public:
    void draw() {
        cout << "CIRCLE drawn" << endl;
    }
};

// --------------------
class Line
{
public:
    void draw() {
        cout << "LINE drawn" << endl;
    }
};

// --------------------
void run() {
    Square s;
    Circle c;
    Line   l;
    
    s.draw();
    c.draw();
    l.draw();
}
