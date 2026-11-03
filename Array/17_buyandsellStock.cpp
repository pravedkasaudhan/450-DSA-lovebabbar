class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //initial but is at first day with profit 0
      int curr=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++){

            //we check if update prices is less so it would be bettter opportunity to buy the stock
            if(prices[i]<curr){
                curr=prices[i];
            }

            // if as per current state with curr rate and initil rate of buy is
            // profit more than we already have in before states
            if(prices[i]-curr >profit){
                profit=prices[i]-curr;
            }
        }
        return profit;
    }
};