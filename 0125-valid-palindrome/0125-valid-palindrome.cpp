class Solution {
public:
           bool isPalindrome(string s) {
        string n;
        for (char c : s) {
            if (isalnum(c)) {
                n += tolower(c);
            }
        }
        
        string k = n;
        reverse(k.begin(), k.end());
        
        return n == k;
    }
};