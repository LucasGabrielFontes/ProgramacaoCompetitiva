class Solution {
public:
    string reverseVowels(string s) {
        
        string vowels;
        for (auto letter: s) {
            if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
                vowels += letter;
            }
        }

        int i = 0;
        int j = vowels.size() - 1;
        for (; i < j; i++, j--){
            char temp = vowels[i];
            vowels[i] = vowels[j];
            vowels[j] = temp;
        }

        int aux = 0;
        for (unsigned int k = 0; k < s.size(); k++){
            char t = s[k];
            if (t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u' || t == 'A' || t == 'E' || t == 'I' || t == 'O' || t == 'U') {
                s[k] = vowels[aux];
                aux++;
            }
        }

        return s;

    }

};