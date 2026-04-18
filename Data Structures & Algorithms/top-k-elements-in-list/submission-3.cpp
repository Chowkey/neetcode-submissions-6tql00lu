class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> mp;
        vector <int> topk;
        for (int i = 0 ; i < nums.size(); i++) {
            if (mp.contains(nums[i]))
            mp[nums[i]]++;
            else mp[nums[i]] = 1;
        }
        vector<pair<int, int>> sortmp;
        for (auto x: mp) {
            pair<int,int> tmp;
            tmp.first = x.second;
            tmp.second = x.first;
            sortmp.push_back(tmp);
        }
        sort(sortmp.begin(), sortmp.end(), greater<>());
        vector<int> res;
        for (int i = 0 ; i < k; i++) {
            res.push_back(sortmp[i].second);
        };
        return res;
    }
};
