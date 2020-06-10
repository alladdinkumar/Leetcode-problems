class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        dp[0]=0;
        dp[1]=nums[0];
        int ans=nums[0];
        for(int i=2;i<=n;i++)
        {
            for(int j=i-2;j>=0;j--)
                dp[i]=max(nums[i-1]+dp[j],dp[i]);
            ans=max(dp[i],ans);
        }
        return ans;
        
    }
};
