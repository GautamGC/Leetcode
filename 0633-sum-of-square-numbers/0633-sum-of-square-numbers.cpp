 #include <iostream>
#include <cmath>
using namespace std;
class Solution {
public:
    bool judgeSquareSum(int c) {
    long l = 0;
    long r = sqrt(c);
    while (l <= r) {
        long s = l * l + r * r;
        if (s == c) {
            return true;
        } else if (s < c) {
            l++;
        } else {
            r--;
        }
    }
    return false;
}

int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;
    if (judgeSquareSum(n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
};