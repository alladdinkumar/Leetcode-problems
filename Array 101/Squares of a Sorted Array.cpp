class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        map<int,int> x;
        vector<int> y;
        for(int i=0;i<A.size();i++)
        {  
            x[A[i]*A[i]]++;
        }
        for(auto z: x)
        {   
            while(z.second--)
            {
                y.push_back(z.first);
            }
        }
        return y;
        
    }
};
