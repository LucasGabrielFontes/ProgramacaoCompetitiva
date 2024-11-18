class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();

        int bigger = *max_element(candies.begin(), candies.end());

        vector<bool> result(n);

        for (int i = 0; i < n; i++) {
            if ((candies[i] + extraCandies) >= bigger) {
                result[i] = true;
            } else {
                result[i] = false;
            }
        }

        return result;
    }
};