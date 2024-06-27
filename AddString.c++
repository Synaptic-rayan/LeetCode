#include<bits/stdc++.h>
using namespace std;
string stringSum(string &num1, string &num2)
{
  if (num1.length() < num2.length())
  {
    swap(num1, num2);
  }

  int len1 = num1.length();
  int len2 = num2.length();
  int carry = 0;

  string result = "";

  for (int i = 0; i < len1; i++)
  {
    int digit1 = num1[len1 - 1 - i] - '0';
    int digit2 = (i < len2) ? num2[len2 - 1 - i] - '0' : 0;
    int sum = digit1 + digit2 + carry;
    carry = sum / 10;
    result.push_back((sum % 10) + '0');
  }

  if (carry > 0)
  {
    result.push_back(carry + '0');
  }

  reverse(result.begin(), result.end());
  return result;
}

int main(){
  string num1, num2;
  cin >> num1 >> num2;
  cout << stringSum(num1, num2);
}