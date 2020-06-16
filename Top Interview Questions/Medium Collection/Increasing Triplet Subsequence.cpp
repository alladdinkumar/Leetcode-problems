class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if (nums.size()<3)
            return false;
        int first_m=nums[0],second_m=INT_MAX,cnt=0;
        for(int x:nums)
        {
            if(x<first_m)
                first_m=x; 
            if(x>first_m && x<second_m)
                second_m=x;
            if(first_m!=second_m && x>second_m)
                return true;
        }
        return false;
    }
};
