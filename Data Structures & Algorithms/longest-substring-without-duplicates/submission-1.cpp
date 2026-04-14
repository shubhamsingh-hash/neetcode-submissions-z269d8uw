class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int high=0;
        int low=0;
        int ans=0;
        unordered_set<char> k;
        int temp=0;
        while(high<s.size()){
            if(k.find(s[high])==k.end()){
                temp++;
                
                k.insert(s[high]);
                high++;
            }
            else{
                while(k.find(s[high])!=k.end()){
                    k.erase(s[low]);
                    low++;
                    temp--;
                }
            }
            ans=max(ans,temp);
            

            
        }
        return ans;
        
    }
};
