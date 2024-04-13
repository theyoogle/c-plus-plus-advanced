
#include <iostream>
#include <map>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person() {}     // Mendatory for iteration

    Person(string name, int age): 
            name(name), age(age) {}

    void print() {
        cout << name << ": " << age << endl;
    }
};

int main() {
    map<int, Person> people;

    people[0] = Person("Mike", 20);
    people[1] = Person("Vicky", 30);
    people[2] = Person("Raj", 20);

    for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++) {
        cout << it->first << ": " << flush;
        it->second.print();
    }

    return 0;
}
