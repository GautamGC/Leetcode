#include <iostream>
using namespace std;
class Solution {
public:
    bool judgeSquareSum(int c) {
    for (long a = 0; a * a <= c; a++) {
        int b = c - a * a;
        int l = 0, r = b;
        while (l <= r) {
            long m = l + (r - l) / 2;
            if (m * m == b) {
                return true;
            } else if (m * m < b) {
                l = m + 1;
            } else {
                r = m - 1;
            }
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