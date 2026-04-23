class Solution {
public:
    int search(vector<int>& nums, int target) {
        int h = nums.size()-1;
        int l = 0;
        int mid = 0;
        while(h >= l) {
            mid = (h+l)/2;
            if (nums[mid] == target) return mid;
            else if ( nums[mid] < target) l = mid+1;
            else h = mid-1;
        } 
        return -1;
    }
};
