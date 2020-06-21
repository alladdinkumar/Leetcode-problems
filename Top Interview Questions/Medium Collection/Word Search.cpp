class Solution {
    bool found=false;
    vector<vector<char>> b;
    vector<vector<bool>>visi;
    vector<vector<int>>dir={{0,1},{1,0},{0,-1},{-1,0}};
    string w;
public:
    void recur(int i,int j,int len)
    {
        if(len==w.size())
        {
            found=true;
            return;
        } 
        if(found==true)
            return;
        for(auto x:dir)
        {
            if( i+x[0]>=0 && i+x[0]<b.size() && j+x[1]>=0 && j+x[1]<b[0].size() && visi[i+x[0]][j+x[1]]==false && b[i+x[0]][j+x[1]]==w[len])
            {
                visi[i][j]=true;
                recur(i+x[0],j+x[1],len+1);
                visi[i][j]=false;
            }
            
        }
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        if(word.empty() || board.empty())
            return found;
        w=word;
        visi=vector<vector<bool>>(board.size(),vector<bool>(board[0].size(),false));
        b=board;
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(found)
                    break;
                if(board[i][j]==word[0])
                {
                    visi[i][j]=true;
                    recur(i,j,1);
                    visi[i][j]=false;
                }
                    
            }
            if(found)
                break;
        }
        return found;
    }
};
