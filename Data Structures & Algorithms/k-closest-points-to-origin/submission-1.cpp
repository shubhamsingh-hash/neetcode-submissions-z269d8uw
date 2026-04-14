class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        priority_queue<
            pair<int, pair<int,int>>,
            vector<pair<int, pair<int,int>>>,
            greater<pair<int, pair<int,int>>>
        > pq;

        for (int i = 0; i < points.size(); i++) {
            int x = points[i][0];
            int y = points[i][1];
            int dist = x*x + y*y;  

            pq.push({dist, {x, y}});
        }

        vector<vector<int>> result;

        for (int i = 0; i < k; i++) {
            auto c = pq.top();
            pq.pop();
            result.push_back({c.second.first, c.second.second});
        }

        return result;
    }
};
