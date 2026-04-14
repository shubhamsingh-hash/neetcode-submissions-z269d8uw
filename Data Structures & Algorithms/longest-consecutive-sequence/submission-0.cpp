class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp;
        for(int i=0;i<nums.size();i++){
            mp.insert(nums[i]);
        }
       
        int count=0;
        int largest=0;

        
        for(int num:mp){
            if(mp.find(num-1)==mp.end()){
                
                count=1;
                int r=num;

                while(mp.find(r+1)!=mp.end()){
                count++;
                r++;

            }
            

            }
            largest=max(largest,count);
            
            
        }
        return largest;
    }
};
