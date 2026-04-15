class Solution {
public:
    bool checkAna(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> countS;
        unordered_map<char, int> countT;
        for (int i = 0; i < s.length(); i++) {
            countS[s[i]]++;
            countT[t[i]]++;
        }
        cout << s << " " << t << endl;
        return countS == countT;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        for (int i = 0 ; i < strs.size(); i++) {
            if (res.size() == 0 ) {
                vector<string> tmp;
                tmp.push_back(strs[i]);
                res.push_back(tmp);
                continue;
            }
            bool alr = false;
            for(int j = 0 ; j < res.size(); j++) {
                if(checkAna(strs[i], res[j][0])) {
                    res[j].push_back(strs[i]);
                    alr = true;
                    break;
                }
            }
            if (!alr) {
                vector<string> tmp;
                    tmp.push_back(strs[i]);
                    res.push_back(tmp);
            }
        }
        return res;
    }
};
