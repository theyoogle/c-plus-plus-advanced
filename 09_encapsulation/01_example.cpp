
#include<iostream>
using namespace std;

class Frog {
private:
    string name;

public:
    Frog(string name): name(name) {}

    string getName() {
        return name;
    }
};


int main() {
    Frog frog("Freddy");

    cout << frog.getName() << endl;

    return 0;
}