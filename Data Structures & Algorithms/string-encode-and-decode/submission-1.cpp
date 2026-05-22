class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(int i=0;i<strs.size();i++){
            int temp=strs[i].size();
           res += to_string(temp);
            res += '#';
            res += strs[i];
        }
        return res;

    }

    vector<string> decode(string s) {
        int k=0;
        vector<string> res;
            while(k<s.size()){
            string temp="";
            while(k<s.size()&&s[k]!='#'){
                temp+=s[k];
                k++;
            }
            int temp2=stoi(temp);
            string curres="";
            curres=s.substr(k+1,temp2);
            res.push_back(curres);
            k+=temp2+1;
            
        }
        return res;

    }
};
