class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            unordered_set<int> mp;
            for(int j=i+1;j<nums.size();j++){
                int r=nums[i]+nums[j];
                r*=-1;
                if(mp.find(r)!=mp.end()){
                    vector<int> a;
                    a.push_back(r);

                    a.push_back(nums[i]);
                    a.push_back(nums[j]);
                    ans.push_back(a);
                    while (j + 1 < nums.size() && nums[j] == nums[j + 1]) j++;
                }

                mp.insert(nums[j]);
                
            }
        }
        return ans;
        
    }
};
