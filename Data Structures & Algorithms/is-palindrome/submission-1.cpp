class Solution {
public:
    bool isPalindrome(string s) {
        string p="";
        for (char c : s) {
            if (isalnum(c)) {
                p += tolower(c);
            }
        }
        int n=p.size();
        for(int i=0;i<(p.size()/2);i++){
            if(p[i]==p[n-i-1]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};
