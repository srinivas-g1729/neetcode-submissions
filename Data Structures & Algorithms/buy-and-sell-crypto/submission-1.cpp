class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;
    // for(int i = 0;i<n;i++){
    //     for(int j = i;j<n;j++){
    //         if(prices[i] < prices[j]){
    //             maxProfit = max(maxProfit,prices[j] - prices[i]);
    //         }
    //         }
    //     }
    //     return maxProfit;
        int minNum = prices[0];
    for(int i = 1;i<n;i++){
        
        if(minNum < prices[i]){
            maxProfit = max(maxProfit,prices[i] - minNum);
            }

            else{
                minNum = prices[i];
            }
        }
        return maxProfit;
    }
};
