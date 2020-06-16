class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
           int j=i+1;
           int k=n-1;
            while(j<k)
            {
               int sum=nums[i]+nums[j]+nums[k];
               if(sum==0)
                {
                   ans.push_back({nums[i],nums[j],nums[k]});
                   int j_val=nums[j];
                   while(j<n-1 && nums[j]==j_val)
                       j++;
                   int k_val=nums[k];
                   while(k>j && nums[k]==k_val)
                       k--;
                  
                }
                else if(sum>0)
                    k--;
                else
                    j++;
            }
            while(i+1<n-2 && nums[i]==nums[i+1])
                       i++;
        }
        return ans;
    }
};
