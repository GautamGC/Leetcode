#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
    int n = difficulty.size();
    vector<pair<int, int>> d;
    for (int i = 0; i < n; ++i) {
        d.push_back({difficulty[i], profit[i]});
    }
    sort(d.begin(), d.end());
    sort(worker.begin(), worker.end());

    int e = 0, f = 0, g = 0;
    for (int h:worker) {
        while (e < n && h >= d[e].first) {
            f = max(f, d[e].second);
            e++;
        }
        g += f;
    }
    return g;
}

int main() {
    vector<int> i, j, k;
    int size;

    cout << "Enter the number of jobs: ";
    cin >> size;

    cout << "Enter job difficulty: ";
    for (int l = 0; l < size; ++l) {
        int input;
        cin >> input;
        i.push_back(input);
    }

    cout << "Enter job profit: ";
    for (int l = 0; l < size; ++l) {
        int input;
        cin >> input;
        j.push_back(input);
    }

    cout << "Enter worker abilities: ";
    for (int l = 0; l < size; ++l) {
        int input;
        cin >> input;
        k.push_back(input);
    }

    int result = maxProfitAssignment(i, j, k);
    cout << "Maximum profit: " << result << endl;

    return 0;
}
};