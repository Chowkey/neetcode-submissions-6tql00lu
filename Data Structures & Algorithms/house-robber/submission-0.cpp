class Solution {
public:
    int rob(vector<int>& nums) {
        //i will iterate every two number i and i+1
        //keep track of the maxinum sum that is formed up until is not i-1 
        // and track the maxinum sum that is formed up until the final number is i-1
        // add those two sum with i+1 then update the second sum with max of them
        // add i to the first sum and then to update
        int notadjsum = 0;
        int adjsum = 0;
        for(int i = 0 ; i < nums.size();i+=2) {
            if (i+1 < nums.size()) adjsum = max(adjsum, notadjsum) + nums[i+1];
            notadjsum += nums[i];
        }
        return max(notadjsum, adjsum);
    }
};
