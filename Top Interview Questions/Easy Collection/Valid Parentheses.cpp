class Solution {
public:
    bool isValid(string s) {
        stack<char>stac;
        for(auto ch :s)
        {
           switch(ch)
           {
               case '(':
                   stac.push('(');
                   break;
                case '{':
                   stac.push('{');
                   break;
                case '[':
                   stac.push('[');
                   break;
                case ')':
                   if(stac.empty() || stac.top()!='(')
                       return false;
                    stac.pop();
                   break;
                case '}':
                   if(stac.empty() || stac.top()!='{')
                       return false;
                    stac.pop();
                   break;
                case ']':
                   if(stac.empty() || stac.top()!='[')
                       return false;
                    stac.pop();
                   break;
           }
        }
        if(stac.empty())
            return true;
        else
            return false;
    }
};
