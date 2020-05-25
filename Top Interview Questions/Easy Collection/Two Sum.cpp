class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
           m[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            int x=nums[i];
            int y=target-x;
            m[x]--;
            if(m.find(y)!=m.end() && m[y]!=0)
            {
                for(int j=0;j<nums.size();j++)
                {
                    if(y==nums[j] && i!=j)
                    {
                        return {i,j};
                    }
                }
                
            }
            
        }
        return {-1,-1};
        
        
    }
};
