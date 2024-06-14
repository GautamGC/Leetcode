#include <vector>
#include <algorithm> 
using namespace std;
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int minIncrements = 0;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] <= nums[i - 1]) {
                int difference = nums[i - 1] - nums[i] + 1;
                nums[i] += difference;
                minIncrements += difference;
            }
        }
        return minIncrements;
    }
};