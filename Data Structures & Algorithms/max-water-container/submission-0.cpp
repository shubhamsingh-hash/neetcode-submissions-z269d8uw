class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r=heights.size()-1;
        int mac=INT_MIN;

        while(l<=r){
            int c=min(heights[l],heights[r])*(r-l);
            mac=max(c,mac);
            if(heights[l]>heights[r]){
                r--;
            }
            else{
                l++;
            }

        }
        return mac;
        
    }
};
