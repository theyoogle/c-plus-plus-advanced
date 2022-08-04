
#include<iostream>
using namespace std;

void show1(string names[], const int N) {
    // int N = sizeof(names);   // return size of pointer - 8

    for (int i=0; i<N; i++) {
        cout << names[i] << " ";
    }
    cout << endl;
}

void show2(string* names, const int N) {
    for (int i=0; i<N; i++) {
        cout << names[i] << " ";
    }
    cout << endl;
}

int main() {
    string names[] = {"one", "two", "three"};

    int N = sizeof(names)/sizeof(string);
    show1(names, N);
    show2(names, N);

    return 0;
}