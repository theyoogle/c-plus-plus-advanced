
#include<iostream>

using namespace std;

int main() {

    char ch1 = 55;
    cout << ch1 << endl << endl;

    char ch2 = 'a';
    cout << ch2 << endl;
    cout << (int) ch2 << endl << endl;

    // --------------------------------------------------
    wchar_t ch3 = 'a';
    cout << ch3 << endl;
    cout << (int) ch3 << endl;
    cout << (char) ch3 << endl << endl;

    // --------------------------------------------------
    cout << "sizeof(char): " << sizeof(char) * 8 << endl;
    cout << "sizeof(wchar_t): " << sizeof(wchar_t) * 8 << endl;
    cout << "sizeof(string): " << sizeof(string) * 8<< endl;

    return 0;
}