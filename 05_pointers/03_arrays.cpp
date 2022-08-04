
#include<iostream>
using namespace std;

int main() {
    string texts[] = {"one", "two", "three"};
    string* sptr = texts;

    int N = sizeof(texts)/sizeof(string);

    for (int i=0; i<N; i++) {
        cout << sptr[i] << " "; 
    }
    cout << endl;
    //------------------------------

    for (int i=0; i<N; i++) {
        cout << *sptr << " ";
        sptr += 1;
    }
    cout << endl;
    //------------------------------

    string* pStart = &texts[0];
    string* pEnd = &texts[N];

    cout << "Elements: " << pEnd - pStart << endl;

    while (pStart != pEnd) {
        cout << *pStart << " ";
        pStart++;
    }
    cout << endl;

    return 0;
}