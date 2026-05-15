class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        for(int i = 0; i < numbers.size(); i++) {
            int x = target-numbers[i];
            int l = 0; 
            int r = numbers.size()-1;
            int m = 0; 
            while(l<=r) {
                m = (l+r)/2;
                if (numbers[m] == x) {
                    cout << numbers[i] << " "<< numbers[m] ;
                    res.push_back(i+1);
                    res.push_back(m+1);  
                    return res;
                }
                else if (numbers[m] > x) {
                    r = m-1;
                }
                else l =m+1;
            }
        }
        return res;
    }
};
