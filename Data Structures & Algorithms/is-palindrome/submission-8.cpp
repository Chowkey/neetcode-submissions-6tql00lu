class Solution {
public:
    int checkA(char c) {
        if (c >= '0' && c <= '9' ) return 1;
        else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) return 2;
        else return 0;
    }
    bool isPalindrome(string s) {
        int l = 0;
        int h = s.size()-1;
        if (h <=0) return true;
        while(l < h) {
            if (checkA(s[l]) == 0) l++;
            else if (checkA(s[h]) == 0) h--;
            else {
                if (s[l] != s[h]) {
                    cout << s[l] << " " << s[h] <<endl;
                    if ((checkA(s[l]) == 1 || checkA(s[h]) == 1) || abs(s[l] - s[h]) != 32 ) return false;
                }
                l++;
                h--;
            }
        }
        return true;
    }
};
