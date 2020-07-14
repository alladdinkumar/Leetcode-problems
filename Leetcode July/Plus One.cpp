class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>x;
        int carry=1;
        int n=digits.size()-1;
        while(carry==1 && n>=0)
        {
            x.insert(x.begin(),(digits[n]+carry)%10);
            carry= (digits[n]+carry)/10;
            n--;
        }
        if(carry==1)
            x.insert(x.begin(),1);
        while(n>=0)
        {
            x.insert(x.begin(),digits[n]);
            n--; 
        }
        return x;
    }
};
