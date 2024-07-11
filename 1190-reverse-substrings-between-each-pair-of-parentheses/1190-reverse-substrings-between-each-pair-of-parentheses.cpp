#include <iostream>
#include <stack>
#include <deque>
#include <string>

class Solution {
public:
    std::string reverseParentheses(const string& s) {
        stack<char> stk;
        deque<char> dq;
        
        for (char c : s) {
            if (c == ')') {
                while (!stk.empty() && stk.top() != '(') {
                    dq.push_back(stk.top());
                    stk.pop();
                }
                if (!stk.empty()) stk.pop();
                while (!dq.empty()) {
                    stk.push(dq.front());
                    dq.pop_front();
                }
            } else {
                stk.push(c);
            }
        }

        string result;
        while (!stk.empty()) {
            result.push_back(stk.top());
            stk.pop();
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};
