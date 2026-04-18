class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(int i = 0; i < strs.size() ; i ++) {
            res += strs[i] + "!#";
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string tmp = "";
        if (s.size() == 0) return res;
        for (int i =0 ; i < s.size()-1; i++) {
            if (s[i] == '!' && s[i+1] == '#') {
                res.push_back(tmp);
                tmp = "";
                i+=1;
            }
            else {
                tmp += s[i];
            }
        }
        return res;
    }
}; 
