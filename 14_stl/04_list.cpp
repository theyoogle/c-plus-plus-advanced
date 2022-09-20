
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> nums;

    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    // [1, 2, 3]

    nums.push_front(100);
    // [100, 1, 2, 3]

    list<int>::iterator it = nums.begin();
    it++;
    nums.insert(it, 500);
    // [100, 500, 1, 2, 3]

    list<int>::iterator eit = nums.begin();
    eit++;
    eit = nums.erase(eit);
    // [100, 1, 2, 3]

    for (list<int>::iterator it = nums.begin(); it != nums.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}
