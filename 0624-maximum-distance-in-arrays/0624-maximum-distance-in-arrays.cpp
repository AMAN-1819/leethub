#include <vector>
#include<algorithm>
class Solution {
public:
 int maxDistance(const vector<vector<int>>& arrays) {
   int smallest=arrays[0][0];
   int biggest=arrays[0].back();
   int maxDist=0;
   for(int i=1;i<arrays.size();i++)
   {maxDist=max(maxDist,abs(arrays[i].back()-smallest));
   maxDist=max(maxDist,abs(biggest-arrays[i][0]));
   smallest=min(smallest,arrays[i][0]);
   biggest=max(biggest,arrays[i].back());}

    return maxDist;
}   
    
};