class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max = 0;
        int l = 0 ;
        int r = heights.size()-1;
        int newl = 0;
        int newr = 0;
        while(l < r) {
            int area = (r-l)*min(heights[l], heights[r]);
            newl = l;
            newr = r;
            if (area>max) max = area;
            if ( heights[r] > heights[l]) {
                while(newl < r && heights[newl] <= heights[l]) {
                    newl++;
                }
                l = newl;
            }
            else {
                while(l<newr && heights[newr] <= heights[r]) {
                    newr--;
                }
                r = newr;
            }
        }
        return max;
    }
};
