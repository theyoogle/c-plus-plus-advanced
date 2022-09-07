
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream inFile;
    // fstream inFile;

    string fileName = "text.txt";

    inFile.open(fileName);
    // inFile.open(fileName, ios::in);
    
    if (inFile.is_open()) {

        string line;
        while (!inFile.eof()) {
            getline(inFile, line);
            cout << line << endl;
        }
        inFile.close();
        
    } else {
        cout << "Could open file for reading: " << fileName << endl;
    }

    return 0;
};