class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int best = 0, curr = 0;
       int buy = 0 , sell = 1;
       int n = prices.size();

       while(sell < n){
        if(prices[buy] < prices[sell]){
            curr = prices[sell] - prices[buy];
            best = max(best , curr);
        }
        else 
         buy = sell;

        sell ++;
       }
       return best; 
    }
};
