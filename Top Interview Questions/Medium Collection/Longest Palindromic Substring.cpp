class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        if(n<2)
            return s;
        int max_len=1;
        int st=0;
        for(int mid=0;mid<n;mid++){
            for(int x=1; mid-x >=0 && mid+x<n ;x++){
               
                if(s[mid-x]!=s[mid+x])
                    break;
                int len = 2*x+1;
                if(len > max_len)
                {
                    max_len=len;
                    st=mid-x;
                }
            }
        }
       for(int mid=0;mid<n-1;mid++){
            for(int x=1;mid-x+1 >=0 && mid+x<n;x++){
                if(s[mid-x+1]!=s[mid+x])
                    break;
                int len=2*x;
                if(len > max_len)
                {
                    max_len=len;
                    st=mid -x+1;
                }
            }
        }  
        string ans=s.substr(st,max_len);
        return ans;
    }
};
