class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> mp;
        int l=0;
        int r=0;
        int longest=0;
        int count=0;
        while(l<=r&&r<s.size()){
            if(mp.find(s[r])==mp.end()){
                mp.insert(s[r]);
                r++;
                count++;
            }
            else{
                while(mp.find(s[r])!=mp.end()&&l<r){
                    mp.erase(s[l]);
                    l++;
                    count--;
                }
            }
            longest=max(longest,count);
        }
        return longest;

        
    }
};
