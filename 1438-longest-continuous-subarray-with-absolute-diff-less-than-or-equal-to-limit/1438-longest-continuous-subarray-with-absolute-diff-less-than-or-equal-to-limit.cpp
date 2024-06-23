#include <iostream>
#include <vector>
#include <set>
using namespace std;
class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
    multiset<int> s;
    int i = 0, j;
    for (j = 0; j < nums.size(); ++j) {
        s.insert(nums[j]);
        if (*s.rbegin() - *s.begin() > limit) {
            s.erase(s.find(nums[i++]));
        }
    }
    return j - i;
}
};