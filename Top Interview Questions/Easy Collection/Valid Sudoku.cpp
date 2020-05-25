class Solution {
public:
    bool row_valid(vector<vector<char>>& board)
    {
        unordered_set<char>x;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                    continue;
                if(x.count(board[i][j])==1)
                    return false;
                else
                    x.insert(board[i][j]);
            }
         
            x.clear();
        }
        
        return true;
    }
bool column_valid(vector<vector<char>>& board)
    {
        unordered_set<char>x;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[j][i]=='.')
                    continue;
                if(x.count(board[j][i])==1)
                    return false;
                else
                    x.insert(board[j][i]);
            }
           
            x.clear();
        }
        return true;
    } 
bool grid_valid(vector<vector<char>>& board)
    {
        unordered_set<char> s;
        for(int i=0;i<9;i+=3)
        {
            for(int j=0;j<9;j+=3)
            {
                for(int x=i;x<i+3;x++)
                {
                    for(int y=j;y<j+3;y++)
                    {
                        if(board[x][y]=='.')
                            continue;
                        if(s.count(board[x][y])==1)
                            return false;
                        else
                            s.insert(board[x][y]) ;
                    }
                }
              
                s.clear();
                
            }
            
        }
        return true;
    }    
    bool isValidSudoku(vector<vector<char>>& board) {
        if(row_valid(board) && column_valid(board) && grid_valid(board))
            return true;
        return false;
        
    }
};
