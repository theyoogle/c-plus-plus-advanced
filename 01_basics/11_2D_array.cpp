
#include<iostream>

using namespace std;

int main() {
    string animals[][3] = {
        {"fox", "dog", "cat"},
        {"mouse", "squirrel", "parrot"}
    };

    int N = sizeof(animals)/sizeof(animals[0]);
    int M = sizeof(animals[0])/sizeof(string);

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cout << animals[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}