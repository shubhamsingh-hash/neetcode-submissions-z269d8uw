class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());;
        int a=nums.size()/2;
        return nums[a];
        
    }
};