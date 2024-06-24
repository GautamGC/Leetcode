#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
    int s = nums.size();
    int r = 0, f = 0;
    vector<int> iF(s, 0);
    for (int j = 0; j < s; ++j) {
        if (j >= k) {
            f ^= iF[j - k];
        }
        if (nums[j] == f) {
            if (j + k > s) {
                return -1;
            }
            ++r;
            f ^= 1;
            if (j + k < s) {
                iF[j + k] = 1;
            }
        }
    }
    return r;
}
};