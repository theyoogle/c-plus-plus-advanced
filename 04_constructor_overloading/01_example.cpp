
#include "Person.cpp"

int main() {
    Person p1;
    cout << p1.toString() << endl;
    cout << "Memory location: " << &p1 << endl << endl;

    Person p2("YooGle");
    cout << p2.toString() << endl;
    cout << "Memory location: " << &p2 << endl << endl;

    Person p3("Samy", 28);
    cout << p3.toString() << endl;
    cout << "Memory location: " << &p3 << endl << endl;

    return 0;
}