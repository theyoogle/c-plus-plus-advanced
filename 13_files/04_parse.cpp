
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream inputFile;

    string fileName = "data.txt";
    inputFile.open(fileName);

    if (!inputFile.is_open()) {
        return 1;
    }

    while (inputFile) {     // !input.eof() - overloaded not operator
        string line;
        getline(inputFile, line, ':');

        int marks;
        inputFile >> marks;

        // input.get();    // discard new line character
        inputFile >> ws;    // clean whitespaces
        if (!inputFile) { break; }

        cout << line << " -- " << marks << endl;
    }
    

    return 0;
}