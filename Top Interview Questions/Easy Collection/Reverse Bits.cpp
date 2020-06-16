class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t num=0; 
        for(int i=0,j=31;i<=31;i++,j--)
        {
            if((long)1<<(i) & n )
                num =(long)1<<(j) | num;
        }
        
        return num;
        
    }
};
