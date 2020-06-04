class Solution {
public:
    int myAtoi(string s) {
        int neg=0,pos=0,first_occ=0;
        long long int number=0;
        for(int i=0;i<s.length();i++)
        {
            if(first_occ==0 && s[i]==' ')
                continue;
            else if(first_occ==0 && s[i]=='-' && pos==0  )
            {
                first_occ=1;
                neg=1;
                continue;
            }
            else if(first_occ==0 && s[i]=='+' && neg==0 )
            {
                first_occ=1;
                pos=1;
                continue;
            }
            else if(!isdigit(s[i]))
                break;
            else if(isdigit(s[i]))
            {
                first_occ=1;
                int x=s[i]-'0';
                number=number*10+x;  
                if( number > INT_MAX || number < INT_MIN)
                    return neg==0?INT_MAX:INT_MIN; 
            }
            
        }
        return neg==0?number:-number;
    }
};
