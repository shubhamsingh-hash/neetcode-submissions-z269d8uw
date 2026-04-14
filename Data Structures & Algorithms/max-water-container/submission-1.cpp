class Solution {
public:
    int maxArea(vector<int>& heights) {
        int high =heights.size()-1;
        int low = 0;
        int ans=0;
        while(low<high){
            int temp=0;
            temp=min(heights[low],heights[high])*(high-low);
            ans=max(temp,ans);
            if(heights[high]>=heights[low]){
                low++;
            }
            else{
                high--;
            }


        }
        return ans;
        
    }
};
