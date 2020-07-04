class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>ugly(n);
        int i2=0,i3=0,i5=0;
        ugly[0]=1;
        int num2=2,num3=3,num5=5;
        for(int i=1;i<n;i++)
        {
            int next=min(num2,min(num3,num5));
            ugly[i]=next;
            if(next==num2){ i2++;    num2=ugly[i2]*2;}
            if(next==num3){ i3++;    num3=ugly[i3]*3;}
            if(next==num5){ i5++;    num5=ugly[i5]*5;}
        }
        return ugly[n-1];
    }
};
