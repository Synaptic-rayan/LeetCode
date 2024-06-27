#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
  int buy = INT_MAX;
  int profit = 0;

  for (int i = 0; i < prices.size(); i++)
  {
    // If we find a new minimum buying price, update buy
    if (prices[i] < buy)
    {
      buy = prices[i];
    }
    else
    {
      // Otherwise, calculate profit with current price and update if it's higher than previous profit
      profit = max(profit, prices[i] - buy);
    }
  }

  return profit;
}

int main()
{
  int n;
  cin >> n;              
  vector<int> prices(n); 
  for (int i = 0; i < n; i++)
  {
    cin >> prices[i]; 
  }
  cout << maxProfit(prices); 
  return 0;
}
