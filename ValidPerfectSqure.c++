#include<bits/stdc++.h>
using namespace std;
bool isPerfectSquare(int n)
{
  if (n == 0 || n == 1)
  {
    return true;
  }

  int low = 1;
  int high = n / 2;

  while (low <= high)
  {
    long long mid = low + (high - low) / 2;
    long long square = mid * mid;

    if (square == n)
    {
      return true;
    }
    else if (square < n)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }

  return false;
}

int main(){
  int n;
  cin >> n;
  cout << isPerfectSquare(n);
}