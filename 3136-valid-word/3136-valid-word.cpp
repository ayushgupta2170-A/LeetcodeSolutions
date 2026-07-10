class Solution {
public:
    bool isValid(string word) {
        if (word.length() < 3)
            return false;

        bool vowel = false, consonant = false;
        string vowels = "aeiouAEIOU";

        for (char ch : word) {
            if (!isalnum(ch))
                return false;

            if (isalpha(ch)) {
                if (vowels.find(ch) != string::npos)
                    vowel = true;
                else
                    consonant = true;
            }
        }

        return vowel && consonant;
    }
};