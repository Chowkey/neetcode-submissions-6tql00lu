class Solution {
public:
    void clearI(int row, int col, int maxcol, int maxrow, vector<vector<char>>& copy ) {
        pair<int, int> p = {row, col};
        queue<pair<int,int>> q;
        q.push(p);
        while(!q.empty()) {
            pair<int,int> tmp = q.front();
            row = tmp.first;
            col = tmp.second;
            q.pop();
            if (col+1 < maxcol && copy[row][col+1] == '1') q.push({row, col+1});
            if (0 <= col-1 && copy[row][col-1] == '1') q.push({row, col-1});
            if (row+1 < maxrow && copy[row+1][col] == '1') q.push({row+1, col});
            if (0 <= row-1 && copy[row-1][col] == '1') q.push({row-1, col});
            copy[tmp.first][tmp.second] = '0'; 

        }
    }
    int numIslands(vector<vector<char>>& grid) {
        if (grid.size() == 0) return 0;
        vector<vector<char>> copy;
        copy = grid;
        int count = 0;
        int maxrow = copy.size();
        int maxcol = copy[0].size();
        for(int i=0; i < maxrow; i++) {
            for(int j =0 ; j<maxcol;j++) {
                if(copy[i][j] == '1') {
                    count++;
                    cout << i << " " << j <<endl;
                    clearI(i,j,maxcol,maxrow, copy);
                }
            }
        }
        return count;
    }
};
