
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> ages;

    ages["mike"] = 10;
    ages["john"] = 50;
    ages["cookie"] = 20;

    ages.insert(make_pair("Peter", 100));

    if (ages.find("john") != ages.end()) {      // Direct access will add entry to map if not there
        cout << ages["john"] << endl;
    }

    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
        cout << it->first << ": " << it->second << endl;
    }

    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
        pair<string, int> age = *it;
        cout << age.first << ": " << age.second << endl;
    }

    return 0;
}
