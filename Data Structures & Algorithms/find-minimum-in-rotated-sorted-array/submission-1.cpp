class Solution {
public:
    int findMin(vector<int> &nums) {
        if(nums.size() == 1) return nums[0];
        int l = 1;
        int r = nums.size()-1;
        int res =0;
        while(l<=r) {
            int m = l+(r-l)/2;
            if (nums[m-1] > nums[m]) {
                return nums[m];
            }
            else if (nums[m] > nums[0]) l = m+1;
            else r = m -1;
        }
        return nums[0];
    }
};
