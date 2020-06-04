class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
            return "";
        string pre="";
        for(int i=0;i<strs[0].length();i++)
        {
            char ch=strs[0][i];
            for(auto s : strs)
            {
                if(ch==s[i])
                {
                    continue;
                }
                else
                {
                    return pre;
                }
            }
            pre+=ch;
        }
        return pre;
        
    }
};
