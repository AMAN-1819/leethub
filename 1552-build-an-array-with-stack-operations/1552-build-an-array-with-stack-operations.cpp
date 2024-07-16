class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        int size=target.size();
        int count=0;
        
        for(int i=1;i<=n;i++)
        { 
            if(find(target.begin(), target.end(), i) != target.end() )
        {ans.push_back("Push");
        count++;
        }
        else 
        {ans.push_back("Push");
        ans.push_back("Pop");
        }
         if (count >=size ) {
                break;
            }
        }

        
return ans;
        
    }
};