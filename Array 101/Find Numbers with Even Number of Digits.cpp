class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even=0;
        for(int i=0;i<nums.size();i++)
        {
            string x=to_string(nums[i]);
            if(!(x.length() & 1) )
                even++;
        }
        return even;
        
    }
};
