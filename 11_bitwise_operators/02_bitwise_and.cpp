
#include<iostream>
using namespace std;

int main() {

    int color = 0x123456FF;

    int red = (color & 0xFF000000) >> 24;
    int green = (color & 0x00FF0000) >> 16;
    int blue = (color & 0x0000FF00) >> 8;
    int alpha = color & 0x000000FF;

    cout << hex << red << endl;
    cout << hex << green << endl;
    cout << hex << blue << endl;
    cout << hex << alpha << endl;

    return 0;
}