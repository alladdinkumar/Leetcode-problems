class Solution {
public:
    struct myComp { 
    bool operator()( 
        pair<int, int> &a, 
        pair<int, int> &b) 
    { 
        return a.second < b.second; 
    } 
}; 
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(auto x:nums)
            m[x]++;
        
       priority_queue<pair<int, int>, vector<pair<int, int>>, myComp> q;
        for(auto x: m)
            q.push(x);
        vector<int>ans;
        while(k--)
        {
            ans.push_back(q.top().first);  
            q.pop();
        }
        return ans;
    }
};
