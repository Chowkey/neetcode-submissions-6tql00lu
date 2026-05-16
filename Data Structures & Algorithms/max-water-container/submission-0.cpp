class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max = 0;
        int l = 0 ;
        int r = heights.size()-1;
        while(l < r) {
            int area = (r-l)*min(heights[l], heights[r]);
            if (area>max) max = area;
            if ( heights[r] > heights[l] ) l++;
            else r--;
        }
        return max;
    }
};
