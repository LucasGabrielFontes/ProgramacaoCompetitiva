class Solution{
public:
    void moveZeroes(vector<int>& nums){

        int zeros = 0;
        vector<int> numsWNzeros;
        for (unsigned int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                numsWNzeros.push_back(nums[i]);
            } else {
                zeros++;
            }
        }

        nums = {};

        for (unsigned int i = 0; i < numsWNzeros.size(); i++) {
            nums.push_back(numsWNzeros[i]);
        }

        for (int i = 0; i < zeros; i++) {
            nums.push_back(0);
        }

    }

};