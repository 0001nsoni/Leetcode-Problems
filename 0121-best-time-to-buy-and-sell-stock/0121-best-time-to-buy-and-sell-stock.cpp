class Solution {
public:
    int maxProfit(vector<int>& prices) {
      if(prices.empty()) return 0;
      int min_price=prices[0];
      int max_price=0;
      for(int i=1;i<prices.size();i++)
      {
        min_price=min(prices[i],min_price);
        max_price=max(max_price,prices[i]-min_price);

      } 
      return max_price; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna