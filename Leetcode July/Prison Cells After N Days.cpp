class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        if(N==0)
            return cells;
        int d=N%14==0?14:N%14;
        for(int i=0;i<14;i++)
        {
            vector<int>temp(8);
            for(int j=1;j<7;j++)
            {
                temp[j]= (cells[j-1]^cells[j+1]) == 0? 1 : 0;
            }
            if(i+1==d)
            {
                return temp;
            }
            cells=temp;
            
        }
        return cells;
    }
};
