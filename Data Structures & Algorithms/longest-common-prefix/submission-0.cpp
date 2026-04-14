class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        // Loop through each character of the first string
        for (int i = 0; i < strs[0].size(); i++) {
            char current = strs[0][i];
            
            // Check this character against all other strings
            for (int j = 1; j < strs.size(); j++) {
                // If the string is too short OR the character doesn't match
                if (i >= strs[j].size() || strs[j][i] != current) {
                    return strs[0].substr(0, i); // Return everything found so far
                }
            }
            // If we make it through all strings, this character is part of the prefix
        }
        
        return strs[0];
    }
};