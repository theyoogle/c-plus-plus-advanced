
#include<iostream>
#include<fstream>
using namespace std;

#pragma pack(push, 1)   // removes extra padding
//=============================================
struct Person {
    char name[50];
    int age;
    double height;
};
//=============================================
#pragma pack(pop)       // pop

int main() {
    // Write
    ofstream outFile;

    string fileName = "data.bin";
    outFile.open(fileName, ios::binary);

    Person john = {"John", 22, 0.8};

    if (outFile.is_open()) {
        // outFile.write((char *) &john, sizeof(Person));                      // old way
        outFile.write(reinterpret_cast<char *>(&john), sizeof(Person));     // new way
        outFile.close();
    } else {
        cout << "Could not create file: " << fileName << endl;
    }

    // Read
    ifstream inputFile;
    inputFile.open(fileName, ios::binary);

    Person someone = {};

    if (inputFile.is_open()) {
        inputFile.read(reinterpret_cast<char *>(&someone), sizeof(Person));
        inputFile.close();
    } else {
        cout << "Could not read file: " << fileName << endl;
    }

    cout << someone.name << ", " << someone.age << ", " << someone.height << endl;

    return 0;
}