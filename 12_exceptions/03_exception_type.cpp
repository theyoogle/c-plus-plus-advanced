
#include<iostream>
using namespace std;

void mightGoWrong() {
    bool error1 = false;
    bool error2 = false;
    bool error3 = true;

    if (error1) {
        throw 8;
    }

    if (error2) {
        throw "Something went wrong";
    }

    // throwing object
    if (error3) {
        throw string("String exception");
    }
}

int main() {
    
    try {
        mightGoWrong();
    } catch(int e) {
        cout << "Error code: " << e << endl;
    } catch (char const *e) {
        cout << "Error message: " << e << endl;
    } catch(string &e) {
        cout << "Error message: " << e << endl;
    }

    cout << "Still running" << endl;

    return 0;
}