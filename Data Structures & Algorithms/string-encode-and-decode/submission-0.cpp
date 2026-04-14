class Solution {
public:
    unordered_map<string,vector<string>> mp;

public:

    string encode(vector<string>& strs) {
        string rc="";
        for(int i=0;i<strs.size();i++){
            rc+=strs[i][0];
        }
        mp[rc]=strs;
        return rc;

    }

    vector<string> decode(string s) {
        return mp[s];


    }
};
