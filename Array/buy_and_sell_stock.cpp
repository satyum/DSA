class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
        int minm=INT_MAX;
        int maxm=INT_MIN;
        for(int price :prices)
        {
         if(price<minm) minm=price;
         maxm=max(maxm,price-minm);
        }
        return maxm;
    }
};
