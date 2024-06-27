#include <bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int> &nums, int k)
{
  priority_queue<int, vector<int>, greater<int>> pq;
  for (int i = 0; i < nums.size(); i++)
  {
    if (pq.size() < k)
    {
      pq.push(nums[i]);
    }
    else if (pq.top() < nums[i])
    {
      pq.pop();
      pq.push(nums[i]);
    }
  }
  return pq.top();
}

int main()
{
  int n, k;
  cin >> n;
  vector<int> nums(n);
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }
  cin >> k;
  if (k > n)
  {
    cout << "Invalid input: k cannot be larger than the number of elements" << endl;
    return 1;
  }
  cout << findKthLargest(nums, k) << endl;
  return 0;
}
