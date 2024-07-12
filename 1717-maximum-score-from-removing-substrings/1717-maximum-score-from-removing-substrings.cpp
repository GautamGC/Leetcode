class Solution {
public:

    int maximumGain(string s, int x, int y) {
        if (x < y) {
            reverse(s.begin(), s.end());
            return maximumGain(s, y, x);
        }
        int totalGain = 0;
        stack<char> stkAb; 
        stack<char> stkBa; 
        for (char c : s) {
            if (c != 'b')
                stkAb.push(c);
            else {
                if (!stkAb.empty() && stkAb.top() == 'a') {
                    stkAb.pop();
                    totalGain += x;
                } else {
                    stkAb.push(c);
                }
            }
        }
        while (!stkAb.empty()) {
            char c = stkAb.top();
            stkAb.pop();
            if (c != 'b')
                stkBa.push(c);
            else {
                if (!stkBa.empty() && stkBa.top() == 'a') {
                    stkBa.pop();
                    totalGain += y;
                } else {
                    stkBa.push(c);
                }
            }
        }
        return totalGain;
    }
};