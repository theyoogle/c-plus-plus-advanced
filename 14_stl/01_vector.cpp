
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> names;

    names.push_back("one");
    names.push_back("two");
    names.push_back("three");

    cout << names.size() << endl;

    for (int i=0; i<names.size(); i++) {
        cout << names[i] << endl;
    }

    for (vector<string>::iterator it = names.begin(); it != names.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}
