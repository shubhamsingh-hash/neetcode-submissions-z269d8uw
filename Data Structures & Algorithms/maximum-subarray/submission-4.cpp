class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int currsum=0;
        for(int i=0;i<nums.size();i++){
            currsum+=nums[i];
            currsum=max(currsum,nums[i]);
            maxi=max(currsum,maxi);
        }
        return maxi;


    }
};
