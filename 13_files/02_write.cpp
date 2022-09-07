
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    fstream file;
    string fileName = "test.txt";

    file.open(fileName, ios::out);
    if (file.is_open()) {

        file << "Hello there" << endl;
        file << 123 << endl;
        file.close();

    } else {
        cout << "Could not create file: " << fileName << endl;
    }

    return 0;
};