class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n= nums.size();
        if(n<2)
            return 0;
        if(nums[0] > nums[1])
                return 0;
        if(nums[n-1] > nums[n-2])
                return n-1;
        for(int i=1,j=n-1;i<=j;i++,j--)
        {
            
            if(nums[i-1]<nums[i] && nums[i]>nums[i+1])
                return i;
            if(nums[j-1]<nums[j] && nums[j]>nums[j+1])
                return j;
        }
        return -1;
    }
    
};
