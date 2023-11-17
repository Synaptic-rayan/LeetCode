class Solution {
public:
    int reverse(int x) {
        long long res = 0;
        long long ans = 0;
         while(x!=0){
            ans = x %10;
             x/=10;
          res = res*10+ans;
          }
          if(res > INT_MAX || res < INT_MIN) return 0;
        return res;
    }
};
