class Solution {
public:

    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<vector<int>> vis(n, vector<int> (m, 0));
        vector<vector<int>> res(n, vector<int> (m, INT_MAX));

        queue<pair<pair<int, int>, int>> q;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j] == 0){
                    q.push({{i, j}, 0});
                    vis[i][j] = 1;
                }
            }
        }

        while(!q.empty()){
                int i = q.front().first.first;
                int j = q.front().first.second;

                vis[i][j] = 1;
                if(i>0 && vis[i-1][j] == 0){
                    q.push({{i-1, j}, q.front().second + 1});
                }
                if(j>0 && vis[i][j-1] == 0){
                    q.push({{i, j-1}, q.front().second + 1});
                }
                if(i<n-1 && vis[i+1][j] == 0){
                    q.push({{i+1, j}, q.front().second + 1});
                }
                if(j<m-1 && vis[i][j+1] == 0){
                    q.push({{i, j+1}, q.front().second + 1});
                }

                res[i][j] = min(q.front().second, res[i][j]);
                q.pop();
        }

        return res;
        
    }
};
