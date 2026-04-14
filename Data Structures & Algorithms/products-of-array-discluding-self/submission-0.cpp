class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix;
        vector<int> suffix;
        int pro=1;
        for(int i=0;i<nums.size();i++){
            prefix.push_back(pro);
            pro*=nums[i];
        }
        int suf=1;
        for(int i=nums.size()-1;i>=0;i--){
            suffix.insert(suffix.begin(),suf);
            suf*=nums[i];
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int k=prefix[i]*suffix[i];
            ans.push_back(k);
        }
        return ans;
    }
};
