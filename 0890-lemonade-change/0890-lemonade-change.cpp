class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        int five_rs=0;
        int ten_rs=0;
        int twenty_rs=0;
        for(int i=0;i<bills.size();i++)
{
    if(bills[i]==5)
    {five_rs++;}
    else if(bills[i]==10)
    {if(five_rs>=1)
    {five_rs--;
    ten_rs++;
    }
    else
    {return false;}
    }
    else
    {if(ten_rs>=1 && five_rs>=1)
    {ten_rs--;
    five_rs--;
    twenty_rs++;}
    else if(five_rs >=3)
    {five_rs=five_rs-3;
    twenty_rs++;}
    else
{return false;}}
}
return true;

    }
};