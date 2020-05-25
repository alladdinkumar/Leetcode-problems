class Solution {
public:
    void rec(vector<int>& nums, int i,int k)
    {
        if(i==nums.size())
            return;
        int x=nums[i];
        rec(nums,i+1,k);
        nums[(i+k)%nums.size()]=x;
    }
    void rotate(vector<int>& nums, int k) {
        int i=0;
        k=k%nums.size();
        rec(nums,i,k);
    }
};
