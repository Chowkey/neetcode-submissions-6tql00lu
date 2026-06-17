class Solution {
public:
    int rob(vector<int>& nums) {
        int rob1 = 0; //can be added
        int rob2 = 0; // cant be added
        for(int i = 0 ; i < nums.size(); i++) {
           int rob  = rob1+ nums[i];
            rob1 = max(rob1,rob2);
            rob2 = rob;
        }
        return max(rob1,rob2);
    }
};
