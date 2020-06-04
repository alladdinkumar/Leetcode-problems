class Solution {
public:
    string count(string s)
    {
        string str="";
        for(int i=0;i<s.length();i++)
        {
            int count=1;
            while(i<s.length()-1 && s[i]==s[i+1] )
            {
                count++;
                i++;
            }
            char ch= '0'+count;
            str+=ch;
            str+=s[i];
        }
        return str;
    }
    string countAndSay(int n) {
        string s;
        if(n==1)
            return "1";
        else
            s=countAndSay(n-1);
        return count(s);
    }
};
