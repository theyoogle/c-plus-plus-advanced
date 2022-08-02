
#include<iostream>

using namespace std;

int main() {
    int nums[3];

    nums[0] = 100;
    nums[1] = 200;
    nums[2] = 300;

    // It will not crash
    cout << nums[3] << endl;

    // Array size
    int N = sizeof(nums)/sizeof(int);
    
    for (int i=0; i<N; i++) {
        cout << nums[i] << " "; 
    }
    cout << endl;

    return 0;
}