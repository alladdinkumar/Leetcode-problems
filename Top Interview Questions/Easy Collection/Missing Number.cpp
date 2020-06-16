class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum2=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum2+=nums[i];
        }
        int sum=(n*(n+1))/2;
        return sum-sum2;
    }
};
