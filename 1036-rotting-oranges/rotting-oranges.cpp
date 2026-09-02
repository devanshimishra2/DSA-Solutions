class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int,int>>q;
        int fresh = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                }
                if(grid[i][j]== 1){
                    fresh++;
                }
            }
        }
        if(fresh == 0) return 0;
        int minutes = 0;
        int dir[4][2] = {{-1,0}, {1,0},{0,-1},{0,1}};
        while(!q.empty() && fresh > 0){
            int size = q.size();
            for(int i = 0; i < size; i++){
                auto node = q.front();
                q.pop();
                int x = node.first;
                int y = node.second;
                for(auto &d : dir){
                    int nx = x + d[0];
                    int ny = y + d[1];
                    if(nx >= 0 && ny >= 0 && nx < m && ny< n && grid[nx][ny] == 1){
                        grid[nx][ny] = 2;
                        q.push({nx,ny});
                        fresh--;
                    }
                }
            }
            minutes++;
        }
        if(fresh> 0) return -1;
        return minutes;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna