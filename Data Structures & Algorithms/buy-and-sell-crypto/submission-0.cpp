class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b = INT_MAX;
        int p = 0;
        for(int i = 0 ; i <prices.size();i++){
            b=min(prices[i],b);
            int temp =  prices[i]-b;
            p=max(p,temp);
        }
        return p;
    }
};
