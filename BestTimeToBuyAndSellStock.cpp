class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProf = 0;    //0 because it's expected if not profit can be gained
        
        for(int i = 0; i < prices.size(); i++){
            minPrice = min(minPrice, prices[i]);
            maxProf = max(maxProf, prices[i]-minPrice);
        }
        
        return maxProf;
    }
};