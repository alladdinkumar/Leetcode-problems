class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        for(int i=0,j=n-1;i<n/2;)
        {
           if( (isalpha(s[i])||isdigit(s[i])) && (isalpha(s[j])|| isdigit(s[j])) )
           {
               if(tolower(s[i])!=tolower(s[j]))
                   return false;
               else
               {
                   i++;
                   j--;
               }
                   
            }
            else if(!(isalpha(s[i])||isdigit(s[i])))
            {
                i++;
            }
                
            else 
                j--;
        }
        return true;
    }
};
