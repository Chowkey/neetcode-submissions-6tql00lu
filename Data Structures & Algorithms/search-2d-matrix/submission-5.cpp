class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int h = matrix.size()-1;
        int m =0;
        int x = 0;
        while(l<=h){
            m = l + (h-l)/2;
            if (matrix[m][0] == target) return true;
            else if (matrix[m][0] < target) l = m+1;
            else h = m - 1;
        }
        if (m > 0 && matrix[m][0] > target) m = m-1;
        l = 0;
        h = matrix[m].size()-1;
        int mid =0;
        while(l<=h){
            mid = l + (h-l)/2;
            if (matrix[m][mid] == target)  return true;
            else if (matrix[m][mid] < target) l = mid +1;
            else h = mid - 1;
        }
        return false;
    }
};
