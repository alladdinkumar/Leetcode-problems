class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int >x;
        for(auto y: nums){
            if(x.count(y)==1)
                return true;
            else
                x.insert(y);
        }
        return false;
    }
};
