class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int btb = INT_MIN;
        for(int i = 0; i<prices.size(); i++) {
            for(int j = i+1; j<prices.size(); j++) {
                btb = max(prices[j]-prices[i], btb);
            }
        }

        return (btb < 0) ? 0 : btb;
    }
};
