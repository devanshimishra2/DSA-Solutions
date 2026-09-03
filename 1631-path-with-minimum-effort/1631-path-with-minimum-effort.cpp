class Solution {
public:
    bool check(vector<vector<int>>& heights, int mid) {
        int n = heights.size();
        int m = heights[0].size();
        queue<pair<int,int>> qu;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        qu.push({0, 0});
        vis[0][0] = 1;
        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};
        while(!qu.empty()) {
            int row = qu.front().first;
            int col = qu.front().second;
            qu.pop();
            if(row == n-1 && col == m-1)
                return true;
            for(int i = 0; i < 4; i++) {
                int nr = row + drow[i];
                int nc = col + dcol[i];
                if(nr >= 0 && nr < n && nc >= 0 && nc < m &&
                   !vis[nr][nc] &&
                   abs(heights[nr][nc] - heights[row][col]) <= mid) {

                    vis[nr][nc] = 1;
                    qu.push({nr, nc});
                }
            }
        }
        return false;
    }
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
        int low = 0;
        int high = 1e6;
        int ans = 1e6;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(check(heights, mid)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna