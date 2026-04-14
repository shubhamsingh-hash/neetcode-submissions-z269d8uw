class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need, window;
        for (char c : t)
            need[c]++;

        int have = 0, needCount = need.size();
        int left = 0, minLen = INT_MAX, startIdx = 0;

        for (int right = 0; right < s.size(); right++) {
            char c = s[right];
            window[c]++;

            if (need.count(c) && window[c] == need[c])
                have++;

            // try shrinking
            while (have == needCount) {
                if ((right - left + 1) < minLen) {
                    minLen = right - left + 1;
                    startIdx = left;
                }

                char leftChar = s[left];
                window[leftChar]--;
                if (need.count(leftChar) && window[leftChar] < need[leftChar])
                    have--;
                left++;
            }
        }

        return (minLen == INT_MAX) ? "" : s.substr(startIdx, minLen);
    }
};
