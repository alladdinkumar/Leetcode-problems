class Solution {
public:
   
    bool isPowerOfThree(int n) {
        if(n==0)
            return false;
        if(n==1)
            return true;
        if(n<0)
            return false;
        for(unsigned long int i=3;i<=n;i=i*3)
        {
            if(i==n)
                return true;
        }
        return false;
    }
};
