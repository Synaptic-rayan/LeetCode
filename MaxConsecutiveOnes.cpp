class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size()-1;
        int maxcnt = 0;
        for(int i=0; i<=n; i++){
            if(nums[i] == 1){
                cnt++;
            }
            else if(nums[i] == 0){
                cnt = 0;
            }
            maxcnt = max(maxcnt,cnt);
        }
        return maxcnt;
    }
};
