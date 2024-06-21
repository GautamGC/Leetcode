#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy,int minutes) {
    int n = customers.size();
    int s = 0;
    for (int i = 0; i < n; ++i) {
        if (grumpy[i] == 0) {
            s += customers[i];
        }
    }
    int a = 0;
    for (int i = 0; i < minutes; ++i) {
        if (grumpy[i] == 1) {
            a += customers[i];
        }
    }
    int maxA = a;
    for (int i = minutes; i < n; ++i) {
        if (grumpy[i] == 1) {
            a += customers[i];
        }
        if (grumpy[i - minutes] == 1) {
            a -= customers[i - minutes];
        }
        maxA = max(maxA, a);
    }
    return s + maxA;
}
int main() {
    int n, m;
    cin >> n;
    vector<int> customers(n);
    vector<int> grumpy(n);
    for (int i = 0; i < n; ++i) {
        cin >> customers[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> grumpy[i];
    }
    cin >> m;
    int maxSatisfiedCustomers = maxSatisfied(customers, grumpy, m);
    cout <<maxSatisfiedCustomers<< endl;
    return 0;
}
};