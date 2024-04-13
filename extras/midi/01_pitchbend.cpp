
#include <iostream>
using namespace std;

int main() {
    int pitchValue = 10000;
    int msb = pitchValue >> 7 & 0x7F;
    int lsb = pitchValue & 0x7F;

    cout << msb << " " << lsb << endl;

    for (int i = 10; --i >= 0;) {
        cout << i << endl;
    }

    return 0;
}