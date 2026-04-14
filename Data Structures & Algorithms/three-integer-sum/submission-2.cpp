class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {


            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int target = -nums[i];
            unordered_set<int> mp;

            for (int j = i + 1; j < nums.size(); j++) {
                int a = target - nums[j];

                if (mp.count(a)) {
                    ans.push_back({nums[i], a, nums[j]});

            
                    while (j + 1 < nums.size() && nums[j] == nums[j + 1]) j++;
                }

                mp.insert(nums[j]);
            }
        }
        return ans;
    }
};
