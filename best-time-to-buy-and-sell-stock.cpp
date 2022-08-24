//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>mini;
        mini.push_back(prices[0]);
        for(int i=1;i<prices.size();i++){
            mini.push_back(min(prices[i],mini[i-1]));
        }
        
        int ans=0;
        for(int i=0;i<prices.size();i++){
            ans=max(prices[i]-mini[i],ans);
        }        
        return ans;
    }
};
