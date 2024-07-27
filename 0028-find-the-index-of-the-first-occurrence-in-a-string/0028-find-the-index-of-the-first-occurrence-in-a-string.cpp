class Solution {
public:
    int strStr(string haystack, string needle) {\
    int size1=haystack.size();
    int size2=needle.size();
    if(size1<size2)
    {return -1;}
    for(int i=0;i<=size1-size2;i++)
    {if(haystack.substr(i,size2)==needle)
    {return i;}}
    return -1;
        
    }
};