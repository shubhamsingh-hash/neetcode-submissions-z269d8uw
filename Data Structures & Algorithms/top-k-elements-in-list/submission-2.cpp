class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int size=nums.size();
        vector<vector<int>> buckets(size+1);
        for(auto it=mp.begin();it!=mp.end();it++){
             buckets[it->second].push_back(it->first);
        }
         vector<int> ans;
        for (int i = size; i >= 0 && ans.size() < k; --i) {
            for (int num : buckets[i]) {
                ans.push_back(num);
                if (ans.size() == k) break;
            }
        }
        return ans;
        
    }
};
