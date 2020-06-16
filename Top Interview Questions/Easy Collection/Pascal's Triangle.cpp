class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        vector<int>prev;
        vector<int>curr;
        prev.push_back(1);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
               if(j==1 || j==i)
                   curr.push_back(1); 
               else{
                   curr.push_back(prev[j-1]+prev[j-2]);
               }
            }
            prev=curr;
            ans.push_back(curr);
            curr.clear();

        }
        return ans;
    }
};
