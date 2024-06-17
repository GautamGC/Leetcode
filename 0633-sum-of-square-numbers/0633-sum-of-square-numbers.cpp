#include <iostream>
using namespace std;
class Solution {
public:
    bool judgeSquareSum(int c) {
    long left = 0;
    long right = sqrt(c);
    while (left <= right) {
        long sum = left * left + right * right;
        if (sum == c) {
            return true;
        } else if (sum < c) {
            left++;
        } else {
            right--;
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