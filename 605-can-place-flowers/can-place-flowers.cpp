class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int places = 0;

        if (flowerbed.size() == 1 && flowerbed[0] == 0) {
            return 1;
        }

        for (int i = 0; i < flowerbed.size(); i++) {
            if (i == 0 && flowerbed[i] == 0 && i+1 < flowerbed.size()) {
                if (flowerbed[i+1] == 0) {
                    places++;
                    i++;
                    continue;
                }
            }

            if ((i == flowerbed.size() - 1) && flowerbed[i] == 0 && i-1 >= 0) {
                if (flowerbed[i-1] == 0) {
                    places++;
                    i++;
                    continue;
                }
            }

            if (flowerbed[i] == 0 && i-1 >= 0 && i+1 < flowerbed.size()) {
                if (flowerbed[i-1] == 0 && flowerbed[i+1] == 0) {
                    places++;
                    i++;
                }
            }
        }

        if (n <= places) {
            return true;
        }

        return false;

    }
};