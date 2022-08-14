
#include<iostream>
using namespace std;

void mightGoWrong() {
    bool error = true;

    if (error) {
        throw 8;
    }
}

int main() {
    
    try {
        mightGoWrong();
    } catch(int e) {
        cout << "Error code: " << e << endl;
    }

    cout << "Still running" << endl;

    return 0;
}