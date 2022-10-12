class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<int, int>> q;
        q.push({sr, sc});
        int col = image[sr][sc];
        vis[sr][sc] = 1;
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            image[x][y] = color;
            vis[x][y] = 1;
            if(x!=0 && image[x-1][y] == col && vis[x-1][y] == 0){
                   q.push({x-1, y});
                }
            if(y!=0 && image[x][y-1] == col && vis[x][y-1] == 0){
                    q.push({x, y-1});
                }
            if(x!=n-1 && image[x+1][y] == col && vis[x+1][y] == 0){
                    q.push({x+1, y});
                }
            if(y!=m-1 && image[x][y+1] == col && vis[x][y+1] == 0){
                    q.push({x, y+1});
                }
                q.pop();
        }
        
        return image;
    }
};
