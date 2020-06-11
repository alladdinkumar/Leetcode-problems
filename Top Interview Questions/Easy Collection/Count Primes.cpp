class Solution {
public:
    int countPrimes(int n) {
        if(n<2)
            return 0;
        bool visited[n+1];
        memset(visited,false,sizeof(visited));
        int cnt=0;
        for(signed long  i=2;i<n;i++)
        {
            if(visited[i]  )
                continue;
            else 
            {
                cnt++;
                for(signed long j=i*i;j<=n;j=j+i)
                {
                    visited[j]=true;
                }
            }
            visited[i]==true;       
            
        }
        return cnt;
    }
};
