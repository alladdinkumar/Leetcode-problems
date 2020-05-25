class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if(A.empty())
            return false;
        int i=0;
        while(i<A.size()-1 && A[i]<A[i+1] )
        {
            i++;
        }   
        if(i==0 || i==A.size()-1)
            return false;
        while(i<A.size()-1 && A[i]>A[i+1] )
        {
            i++; 
        }  
        if(i<A.size()-1)
            return false;
        return true;
        
    }
};
