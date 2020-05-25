class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        for(auto x:nums1)
        {
            m[x]++;
        }
        nums1.clear();
        for(auto x:nums2)
        {
            if(m.find(x)!=m.end() && m[x]!=0)
            {
                nums1.push_back(x);
                m[x]--;
            }
        }
        return nums1;
        
    }
};
