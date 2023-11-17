class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = INT_MIN;
        int max_index = -1;
        int second_max = INT_MIN;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > max){
                second_max = max;
                max = nums[i];
                max_index = i;
            }
            else if(nums[i] > second_max){
                second_max = nums[i];
            }
        }

        if(max >= 2 * second_max){
            return max_index;
        }
        else{
            return -1;
        }
    }
};
