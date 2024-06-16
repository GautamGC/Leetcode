#include <vector>
using namespace std;
class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        
    long m = 1, d = 0, i = 0;
    while (m <= n) {
        if (i < nums.size() && nums[i] <= m) {
            m += nums[i++];
        } else {
            m += m;
            d++;
        }
    }
    return d;
}
};