#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        
    int n = profits.size();
    vector<pair<int, int>> pr;
    for (int i = 0; i < n; i++) {
        pr.push_back({capital[i], profits[i]});
    }
    sort(pr.begin(), pr.end());

    priority_queue<int> q;
    int i = 0;
    for (int j = 0; j < k; j++) {
        while (i < n && pr[i].first <= w) {
            q.push(pr[i].second);
            i++;
        }
        if (q.empty()) {
            break;
        }
        w += q.top();
        q.pop();
    }
    return w;
}

int main() {
    int k = 3;
    int w = 0;
    vector<int> p = {1, 2, 3};
    vector<int> c = {0, 1, 1};
    cout << "Maximized Capital: " << findMaximizedCapital(k, w, p, c) << endl;
    return 0;
}
};