#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
    sort(position.begin(), position.end());
    int l = 1, r = position.back() - position.front();
    int res = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        int c = 1;
        int prev = position[0];
        for (int i = 1; i < position.size(); ++i) {
            if (position[i] - prev >= mid) {
                c++;
                prev = position[i];
            }
        }
        if (c >= m) {
            res = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return res;
}
int main() {
    int n, m;
    cin >> n;
    vector<int> pos(n);
    for (int i = 0; i < n; ++i) {
        cin >> pos[i];
    }
    cin >> m;
    int result = maxDistance(pos, m);
    cout<< result << endl;
    return 0;
}
};