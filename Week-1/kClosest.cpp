class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, int>> pq;

        for(int i=0; i<points.size(); i++){
            int dist = pow(points[i][0], 2)+pow(points[i][1], 2);
            if(pq.size() == k){
                if(pq.top().first > dist){
                    pq.pop();
                    pq.push(make_pair(dist, i));
                }
            }
            else {
                pq.push(make_pair(dist, i));
            }
        }

        vector<vector<int>> ans;
        while(!pq.empty()){
            vector<int> v;
            v.push_back(points[pq.top().second][0]);
            v.push_back(points[pq.top().second][1]);
            ans.push_back(v);
            v.clear();
            pq.pop();
        }

        return ans;
    }
};
