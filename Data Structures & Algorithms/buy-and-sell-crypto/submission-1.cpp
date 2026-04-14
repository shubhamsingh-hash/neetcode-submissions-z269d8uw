class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prof=0;
        int k=prices[0];
        for(int i=0;i<prices.size();i++){
            if(k>prices[i]){
                k=prices[i];
            }
            else{
                prof=max(prof,(prices[i]-k));
            }
            

        }
        return prof;

        
    }
};
