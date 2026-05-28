class Solution {
public:
    int characterReplacement(string s, int k) {
        //the char with most count in the substring must - total count of other different char is <= k
        //
        unordered_map<char, int> mp;
        int l = 0;
        int r = 0;
        int res = 0;
        int maxc= 0;
        for(int i = 0; i < s.size(); i++) {
            if (mp.contains(s[i])) {
                mp[s[i]]++;
            }
            else mp[s[i]] = 1;
            maxc = max(maxc, mp[s[i]]);
            r = i ;
            if (r-l+1 > maxc + k ) {
                //maxc should be updated here as it shrink but it is somthing like optimal solution already found, go check your own submission
                mp[s[l]]--;
                l++;
            }
            cout << r <<  " " << l << endl;
            res = max(res, r-l+1);
        }
        return res;
    }
};
