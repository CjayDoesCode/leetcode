class Solution {
public:
    bool isPalindrome(string s) {
        string phrase = "";
        for (char ch : s) if (isalnum(ch)) phrase += tolower(ch);
        for (int i = 0, j = phrase.size() - 1; i < phrase.size(); ++i, --j) {
            if (phrase[i] != phrase[j]) return false;
        }
        return true;
    }
};
