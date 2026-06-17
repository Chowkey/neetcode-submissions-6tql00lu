class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int rob1 = 0; //can be added
        int rob2 = 0; // cant be added
        for(int i = 1 ; i < nums.size(); i++) {
           int rob  = rob1+ nums[i];
            rob1 = max(rob1,rob2);
            rob2 = rob;
        }
        int firstans = max(rob1,rob2);
        rob1 = 0; //can be added
        rob2 = 0; // cant be added
        for(int i = 0 ; i < nums.size()-1; i++) {
           int rob  = rob1+ nums[i];
            rob1 = max(rob1,rob2);
            rob2 = rob;
        }
        int secans = max(rob1,rob2);
        return max(firstans,secans);
    }
};
