class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> m;
    vector<int> r;

    for (int n : nums1) {
        m[n]++;
    }

    for (int n : nums2) {
        if (m[n] > 0) {
            r.push_back(n);
            m[n]--;
        }
    }

    return r;
}
};