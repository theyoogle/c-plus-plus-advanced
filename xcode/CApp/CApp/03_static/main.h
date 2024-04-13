#include <iostream>
using namespace std;

// --------------------
class Counter
{
public:
    static int objectCounts;
    
    Counter() {
        objectCounts++;
    }
    
    static void showCounts() {
        cout << "Total number of objects of this type = " << objectCounts << endl;
    }
};


// --------------------
int Counter::objectCounts = 0;

// --------------------
void run()
{
    Counter::showCounts();
    Counter a, b, c;
    Counter::showCounts();
}
