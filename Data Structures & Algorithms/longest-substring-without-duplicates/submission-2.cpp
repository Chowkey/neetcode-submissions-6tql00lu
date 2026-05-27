class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        int track =0;
        int i =0;
        unordered_map<char, int> seen;
        while(i < s.size()) {
            if (!seen.contains(s[i])) {
                seen[s[i]] = i+1;
                i++;
            }
            else {
                res = max(i-track, res);
                track = seen[s[i]];
                seen.clear();
                for(int j = track ; j < i; j++) seen[s[j]] = i+1;
                seen[s[i]] = i+1;
                i++;
            }
        }
        res = max(i-track, res);
        return res;
    }
};
