class Solution {
    vector<string>v;
public:
    void gen(string s,int o,int c,int n)
    {
        if(o==n && c==n)
            v.push_back(s);
        if(o<n)
           gen(s+"(",o+1,c,n);
        if(c<o)
           gen(s+")",o,c+1,n); 
    }
    vector<string> generateParenthesis(int n) {
        if(n<1)
            return v;
        gen("(",1,0,n);
        return v;
        
    }
};
