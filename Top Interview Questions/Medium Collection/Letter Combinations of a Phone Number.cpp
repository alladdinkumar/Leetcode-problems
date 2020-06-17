class Solution {
    string in;
    vector<string>v={ "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string>ans;
public:
    void recur(string s,int dig){
        if(dig> in.length()-1)
            return;
        else if(dig < in.length()-1){
            int pos=in[dig]-'0';
            for(int i=0;i< v[pos].length();i++){
                recur(s+v[pos][i],dig+1);
            }
        }
        else{
            int pos=in[dig]-'0';
            for(int i=0;i<v[pos].length();i++){
                ans.push_back( s+v[pos][i]); 
            }
        }
    }
    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return ans;
        in=digits;
        string s="";
        recur(s,0);
        return ans;
    }
};

