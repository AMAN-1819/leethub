class Solution {
public:
    bool isPalindrome(string s) {
        string n;
        for(int i=0;i<s.size();i++)
        {if(isalnum(s[i]))
        {n+=tolower(s[i]);
        }
        }
        string k=n;
       reverse(k.begin(),k.end());
        return n==k;
        
        
    }
};