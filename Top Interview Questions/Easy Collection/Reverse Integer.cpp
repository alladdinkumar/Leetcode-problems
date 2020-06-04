class Solution {
public:
    int reverse(int x) {
        string s= to_string(x);
        int n= s.length();
        for(int i=0,j=n-1;i<n/2;i++,j--)
        {
            char ch=s[i];
            s[i]=s[j];
            s[j]=ch;
        }
        long long int y=0;
        stringstream ss(s);
        ss>>y;
        if (log2(y)>31)
            return 0;
        return x>0?y:-y;
    }
};
