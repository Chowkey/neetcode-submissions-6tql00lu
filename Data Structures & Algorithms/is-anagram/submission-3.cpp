class Solution {
public:
    bool isAnagram(string s, string t) {
        // unordered_map<char, int> mp;
        // if (s.size() != t.size()) return false;
        // for (auto c : s) {
        //     if(!mp.contains(c)) mp[c] = 1;
        //     else mp[c]++;
        // }
        // for (auto c : t) {
        //     if (!mp.contains(c) || mp[c] == 0) {
        //         return false;
        //     }
        //     else mp[c]--;
        // }
        // return true;
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> countS;
        unordered_map<char, int> countT;
        for (int i = 0; i < s.length(); i++) {
            countS[s[i]]++;
            countT[t[i]]++;
        }
        return countS == countT;
    }
};
