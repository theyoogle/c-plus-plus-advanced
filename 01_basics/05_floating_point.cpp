
#include<iostream>
#include<iomanip>

using namespace std;

int main() {

    float fValue = 76.4;

    cout << fixed << fValue << endl;
    cout << setprecision(20) << fixed << fValue << endl;
    cout << scientific << fValue << endl << endl;

    // --------------------------------------------------
    double dValue = 76.4;

    cout << fixed << dValue << endl;
    cout << setprecision(20) << fixed << dValue << endl;
    cout << scientific << dValue << endl << endl;

    // --------------------------------------------------
    long double ldValue = 76.4;

    cout << fixed << ldValue << endl;
    cout << setprecision(20) << fixed << ldValue << endl;
    cout << scientific << ldValue << endl << endl;

    // --------------------------------------------------
    cout << "sizeof(float): " << sizeof(float) * 8 << endl;
    cout << "sizeof(double): " << sizeof(double) * 8 << endl;
    cout << "sizeof(long double): " << sizeof(long double) * 8 << endl;

    return 0;
}