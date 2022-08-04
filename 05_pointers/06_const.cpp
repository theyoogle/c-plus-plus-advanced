
#include<iostream>
using namespace std;

int main() {
    int a1 = 100;
    int a2 = 200;

    int* pa = &a1;

    cout << "Before: pa -> " << *pa << " -> " << pa << endl;
    pa = &a2;
    cout << "Address Changed: pa -> " << *pa << " -> " << pa << endl;
    *pa = 999;
    cout << "Value Changed: pa -> " << *pa << " -> " << pa << endl;

    cout << endl;
    //--------------------------------------

    int b1 = 100;
    int b2 = 200;

    const int* pb = &b1;

    cout << "Before: pb -> " << *pb << " -> " << pb << endl;
    pb = &b2;
    cout << "Address Changed: pb -> " << *pb << " -> " << pb << endl;
    // *pb = 999;
    // cout << "Value Changed: pb -> " << *pb << " -> " << pb << endl;

    cout << endl;
    //--------------------------------------

    int c1 = 100;
    int c2 = 200;

    int* const pc = &c1;

    cout << "Before: pc -> " << *pc << " -> " << pc << endl;
    // pc = &c2;
    // cout << "Address Changed: pc -> " << *pc << " -> " << pc << endl;
    *pc = 999;
    cout << "Value Changed: pc -> " << *pc << " -> " << pc << endl;

    cout << endl;
    //--------------------------------------

    int d1 = 100;
    int d2 = 200;

    const int* const pd = &d1;

    cout << "Before: pd -> " << *pd << " -> " << pd << endl;
    // pd = &d2;
    // cout << "Address Changed: pd -> " << *pd << " -> " << pd << endl;
    // *pd = 999;
    // cout << "Value Changed: pd -> " << *pd << " -> " << pd << endl;

    return 0;
}