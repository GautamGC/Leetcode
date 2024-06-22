class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int res = 0;
        int l = 0;
        int cnt = 0;
        int n = nums.size();
        for (int r = 0; r < n; r++) {
            if (nums[r] % 2 == 1) {
                k--;
                cnt = 0;
            }
            while (k == 0) {
                k += nums[l] & 1;
                cnt++;
                l++;
            }
            res += cnt;
        }
        return res;
    }
};
