class Solution {
    int m,n,cnt;
    vector<vector<char>>G;
    vector<vector<bool>>visi;
    vector<vector<int>>dir={{0,1},{1,0},{0,-1},{-1,0}};
public:
     void fill(int i ,int j)
    {
        for(auto x:dir){
            if(i+x[0]>=0 && i+x[0]<m && j+x[1]>=0 && j+x[1]<n && visi[i+x[0]][j+x[1]]==false && G[i+x[0]][j+x[1]]=='1'){
                visi[i+x[0]][j+x[1]]=true; 
                fill(i+x[0],j+x[1]);
            }
        }
          
    }
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty())
            return 0;
        m = grid.size();
        n = grid[0].size();
        cnt=0;
        G=grid;
        visi=vector<vector<bool>>(m,vector<bool>(n,false));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1' && visi[i][j]==false)
                {
                    visi[i][j]=true;
                    ++cnt;
                    fill(i,j);
                }
            }
        }
        return cnt;
    }
};
