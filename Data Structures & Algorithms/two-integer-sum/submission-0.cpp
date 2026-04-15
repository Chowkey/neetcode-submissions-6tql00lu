class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int> res;
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++) {
            if (mp.contains(nums[i])) {
                res.push_back(mp[nums[i]]);
                res.push_back(i);
                return res;
            }
            else if (!mp.contains(target-nums[i])) mp[target-nums[i]] = i;
        }
        return res;
    }
};
