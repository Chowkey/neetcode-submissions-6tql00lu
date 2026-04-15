class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> check;
        for (int i = 0; i < nums.size(); i++) {
            if (!check.contains(nums[i])) check.insert(nums[i]);
            else return true;
        }
        return false;
    }
};