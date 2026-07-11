class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '{' || s[i] == '(' || s[i] == '[') {
                stk.push(s[i]);
            } else {
                if (stk.empty()) return false;
                char c = stk.top();
                stk.pop();

                if (s[i] == ')' && c != '(') return false;
                if (s[i] == '}' && c != '{') return false;
                if (s[i] == ']' && c != '[') return false;
            }
        }
        return stk.empty();  // valid only if every opener was matched
    }
};