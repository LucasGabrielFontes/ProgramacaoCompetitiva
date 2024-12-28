class Solution {
public:
    string reverseWords(string s) {
        
        vector<string> words;

        for (unsigned int i = 0; i < s.size(); i++){
            string word;
            while (s[i] != ' ' && s[i] != '\0' && s[i] != '\n'){
                word += s[i];
                i++;
            }
            if (word != ""){
                words.push_back(word);
            }
        }

        reverse(words.begin(), words.end());

        string output;
        for (unsigned int i = 0; i < words.size(); i++) {
            output += i < words.size()-1 ? (words[i] + ' ') : words[i];
        }

        return output;
    }
};