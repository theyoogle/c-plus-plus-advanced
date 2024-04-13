#include <iostream>
using namespace std;

// --------------------
class Shape
{
public:
    virtual void draw() {
        cout << "SHAPE Base class draw()" << endl;
    }
};

// --------------------
class Square : public Shape
{
public:
    void draw() {
        cout << "SQUARE drawn" << endl;
    }
};

// --------------------
class Circle : public Shape
{
public:
    void draw() {
        cout << "CIRCLE drawn" << endl;
    }
};

// --------------------
class Line : public Shape
{
public:
    void draw() {
        cout << "LINE drawn" << endl;
    }
};

// --------------------
void run() {
    Shape* shapes[3] = { new Circle(), new Square(), new Line() };
    
    for (int i=0; i<3; i++) {
        shapes[i]->draw();
    }
}
