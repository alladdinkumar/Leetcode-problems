class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>m;
        int len=0;
        int n=s.length();
        int first;
        for(int i=0;i<n;i++)
        {
            
            if(m.empty())
            {
               first=i; 
            }
            if(m.find(s[i])==m.end())
            {
                m[s[i]]=i;
            }
            else{
                int index=m[s[i]];
                int ms=m.size();
                len=len<ms?ms:len;
                for(int j=first;j<=index;j++)
                    m.erase(s[j]);
                first=index+1;
                m[s[i]]=i;
            }
        }
        int ms=m.size();
        if(ms>0)
            len=len<ms?ms:len;
        return len;
        
    }
};
