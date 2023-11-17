  class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size() , i = 0;
        if(n == 1)return i;
        for(; i < n ; i++){
            if(i == 0){
                if(nums[i] > nums[i+1])return i;
            }
            else if(i == n-1){
                if(nums[i] > nums[i-1])return i;
            }
            else{
                if(nums[i - 1] < nums[i] && nums[i] > nums[i + 1])
                break;
                
            }
        }
        return i;
/*_________________________________________________________________________________________Another solution__________________________________________________________________________________________________*/


class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        if(nums.size() == 1 || nums.size() == 0){
            return 0;
        }
        while(low<=high){
            int mid = low + (high - low) / 2;
            if((mid == 0 || nums[mid] > nums[mid-1]) && (mid == nums.size()-1 || nums[mid] > nums[mid+1])){
                return mid;
            }
            else if(mid > 0 && nums[mid] < nums[mid-1]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return -1;
    }
};
