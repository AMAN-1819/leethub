class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count=0;
        int s=0;
        int e=nums.size()-1;
        while(s<e){
            if(nums[s]+nums[e]==k)
            {count++;
        s++;
        e--;}
        else if(nums[s]+nums[e]>k)
        {e--;}
        else
        s++;

        }
        return count;
        
        
    }
};