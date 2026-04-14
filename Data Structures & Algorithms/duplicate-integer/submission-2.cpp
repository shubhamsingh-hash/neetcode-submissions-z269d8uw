class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> mp;
        for(int i=0;i<nums.size();i++){
            if(!mp.count(nums[i])){
                mp.insert(nums[i]);
            }
            else{
                return true;
            }
        }
        return false;
        
        
    }
};