class Solution {
public:
    int compress(vector<char>& chars) {
        
        string output;
        output += chars[0];
        char act = chars[0];
        int amnt = 1;
        for (unsigned int i = 1; i < chars.size(); i++) {
            if (chars[i] != act) {
                output += amnt > 1 ? to_string(amnt) : "";
                output += chars[i];
                act = chars[i];
                amnt = 1;
            } else {
                amnt++;
            }
        }

        output += amnt > 1 ? to_string(amnt) : "";

        chars = {};
        for (int i = 0; i < output.size(); i++) {
            chars.push_back(output[i]);
        }

        return output.size();

    }
};