class Solution {
public:
    int minBitFlips(int start, int goal) {
        vector<int>temp,temp1;
        int count=0;
        while(start>=1)
        {int a=start%2;
        temp.push_back(a);
        start=start/2;}
         while(goal>=1)
        {int a=goal%2;
        temp1.push_back(a);
        goal=goal/2;}
        reverse(temp.begin(),temp.end());
        reverse(temp1.begin(),temp1.end());
        int sizeDifference = abs((int)(temp.size() - temp1.size()));
        if (temp.size() < temp1.size()) {
            temp.insert(temp.begin(), sizeDifference, 0);  
        } else if (temp1.size() < temp.size()) {
            temp1.insert(temp1.begin(), sizeDifference, 0); 
        }
        for(int i=0;i<temp.size();i++)
        
        {if( temp[i]!=temp1[i])
        {count++;}}


return count;

    }
};