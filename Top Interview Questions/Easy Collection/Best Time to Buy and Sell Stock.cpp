class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty())
            return 0;
        int with_stock=INT_MIN,without_stock=0,ans=0;
        for(auto x:prices)
        {
            with_stock=max(with_stock,-x);
            without_stock=max(without_stock,with_stock+x);
        }
        return without_stock;
    }
};
