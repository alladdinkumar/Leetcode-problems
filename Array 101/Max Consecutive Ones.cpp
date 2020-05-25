class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum=0,answer=0;
        for(int i=0;i<nums.size();i++)
        {
            sum = sum+nums[i];
            if(nums[i]==0)
                sum=0;
            answer=max(sum,answer);
            
    }
    return answer;
        
        
    }
};
