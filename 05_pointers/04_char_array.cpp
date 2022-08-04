
#include<iostream>
using namespace std;

int main() {
    char text[] = "hello";
    int N = sizeof(text);
    // int N = sizeof(text) - 1;

    for (int i=0; i<N; i++) {
        cout << i << ". " << text[i] << "\t" << (int) text[i] << endl;
    }
    cout << endl;
    //------------------------------

    int i=0;
    while (text[i] != 0) {
        cout << i << ". " << text[i] << "\t" << (int) text[i] << endl;
        i++;
    }

    return 0;
}