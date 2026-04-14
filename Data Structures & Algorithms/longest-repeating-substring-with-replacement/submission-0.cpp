class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int maxfreq=0;
        int left=0;
        int right=0;
        int ans=0;
        while(left<=right&&right<s.size()){
            mp[s[right]]++;
            maxfreq=max(mp[s[right]],maxfreq);
            right++;
             while ((right - left) - maxfreq > k) {
                mp[s[left]]--;
            left++;
        }


        ans=max(ans,right-left);
        }

          return ans;
    }
  
};
