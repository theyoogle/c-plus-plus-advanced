
#include<iostream>
using namespace std;

class CanGoWrong {
public:
    CanGoWrong() {
        char *pMemory = new char[999999999999999999];
        delete[] pMemory;
    }
};

int main() {
    try {
        CanGoWrong wrong;
    } catch(bad_alloc &e) {
        cout << "Error Message: " << e.what() << endl;
    }

    return 0;
}