class Solution {
public:
    int minChanges(int n, int k) {
        int count=0;
        if(k>n)
       {return -1;}
        while(n > 0 || k > 0)
        {if((n & 1) != (k & 1))
        {if(( n & 1 ) == 1)
        {count++;}
        else
        {return -1;}
        }
        n>>=1;
        k>>=1;
    }
        return count;
    }
};