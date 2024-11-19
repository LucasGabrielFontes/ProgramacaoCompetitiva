class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> prod_left(nums.size());
        vector<int> prod_right(nums.size());

        prod_left[0] = 1;
        prod_left[1] = nums[0];
        for (unsigned int i = 2; i < nums.size(); i++) {
            prod_left[i] = prod_left[i-1]*nums[i-1];
        }

        prod_right[nums.size()-1] = 1;
        prod_right[nums.size()-2] = nums[nums.size()-1];
        for (int i = nums.size()-3; i >= 0; i--){
            prod_right[i] = prod_right[i+1]*nums[i+1];
        }

        for (unsigned int i = 0; i < nums.size(); i++){
            prod_left[i] = prod_left[i]*prod_right[i];
        }

        return prod_left;
    }
};