class Solution {
    vector<int> num;
public:
    Solution(vector<int>& nums) {
        num=nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return num;    
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        if(num.empty() || n==1)
            return num;
        vector<int>a=num;
        random_shuffle(a.begin(),a.end());
        return a;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
