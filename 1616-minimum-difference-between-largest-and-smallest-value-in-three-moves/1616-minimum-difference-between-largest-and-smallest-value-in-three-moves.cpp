class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int maxi=0;
        int mini=0;
        if(nums.size()<5)
        {return count;}
        sort(nums.begin(),nums.end());
         int minDiff = INT_MAX;

        // Four scenarios to compute the minimum difference
        for (int left = 0, right = n - 4; left < 4; left++, right++) {
            minDiff = min(minDiff, nums[right] - nums[left]);
        }

        return minDiff;
  
        return 0;
    }
};