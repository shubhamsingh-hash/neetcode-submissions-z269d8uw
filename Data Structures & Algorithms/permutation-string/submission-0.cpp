class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         if (s1.size() > s2.size()) return false;
        unordered_map<char,int> mp1;

        for(int i=0;i<s1.size();i++){
            mp1[s1[i]]++;
        }
        
        unordered_map<char,int> mp2;
        for(int i=0;i<s1.size();i++){
            mp2[s2[i]]++;
        }
        if(mp1==mp2){
            return true;

        }
        int high=s1.size();
        int low=0;
        while(high<s2.size()){
            mp2[s2[low]]--;
            mp2[s2[high]]++;
            if (mp2[s2[low]] == 0) {
                mp2.erase(s2[low]);
            }
            if(mp1==mp2){
            return true;

        }
        
        low++;
        high++;
        }
        return false;

        
    }
};
