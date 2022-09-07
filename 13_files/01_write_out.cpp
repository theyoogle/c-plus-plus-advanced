
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream outFile;
    string fileName = "test.txt";

    outFile.open(fileName);
    if (outFile.is_open()) {

        outFile << "Hello there" << endl;
        outFile << 123 << endl;
        outFile.close();

    } else {
        cout << "Could not create file: " << fileName << endl;
    }

    return 0;
};