class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> mp;
        mp['('] = ')';
        mp['{'] = '}';
        mp['['] = ']';
        for(char x: s) {
            if (x == '(' || x == '{' || x == '[' ) {
                st.push(x);
            }
            else {
                if (!st.empty() && x == mp[st.top()] ) st.pop();
                else return false;
            }
        }
        if (st.empty()) return true;
        else return false;
    }
};
