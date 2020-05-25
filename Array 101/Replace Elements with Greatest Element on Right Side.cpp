class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>a;
        
        int n=arr.size()-1;
        a.insert(a.begin(),-1);
        int m=-1;
        
        for(int i=n;i>=1;i--)
        {
            a.insert(a.begin(),arr[i]>m?arr[i]:m);
            m=arr[i]>m?arr[i]:m;
        }
        
        return a;
        
    }
};
