class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        if(nums.empty())
            return 0;
        make_heap(nums.begin(),nums.end());
        while(k-->1)
        {
            pop_heap(nums.begin(),nums.end());
            nums.pop_back();
        }
        return nums.front();
        
    }
};
