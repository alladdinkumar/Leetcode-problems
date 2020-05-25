class Solution {
public:
    
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> a;
        int z=0;
        for(auto x:arr)
        {
            if(x!=0)
                a.insert(x);
            else
                z++;
        }
        for(auto x: arr)
        {
            if(a.count(x*2)==1)
                return true;
        }
        if(z>1)
            return true;
        return false;
        
    }
};
