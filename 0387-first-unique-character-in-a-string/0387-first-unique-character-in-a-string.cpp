class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,pair<int,int>>lists;
        for(int i=0;i<s.size();i++)
        {char c=s[i];
        if(lists.find(c)==lists.end())
        {lists [c]=make_pair(i,1);
        }
        else
        {lists[c].second++;}

        }
         for (int i = 0; i < s.size(); ++i) {
        char c = s[i];
        if (lists[c].second == 1) {
            return i; // Return the first character that occurs only once
        }
    }
    return -1;
    }
};