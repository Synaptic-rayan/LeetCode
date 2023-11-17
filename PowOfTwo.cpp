class Solution {
public:
    bool isPowerOfTwo(int n) {
          if(n == 0 || n < 0){
              return false;
          }
         else{
              int k = n-1;
              int ans = n & k;
          if(ans == 0){
              return true;
              }
              else{
                  return false;
              }
          }
    }
};
