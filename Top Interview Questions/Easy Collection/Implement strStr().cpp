class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()==0)
            return 0;
        int index;
        for(int i=0;i<haystack.length();i++)
        {
            if(haystack[i]==needle[0])
            {
                index=i;
                index++;
                int j;
                for(j=1;j<needle.length();)
                {
                    
                    if(index>=haystack.length())
                    {
                        return -1;
                    }
                    if(needle[j]==haystack[index])
                    {
                        index++;
                        j++;
                    }
                    else
                    {
                        break;
                    }
                }
                if(j>=needle.length())
                {
                    return i; 
                }
            }
        }
        return -1;
    }
};
