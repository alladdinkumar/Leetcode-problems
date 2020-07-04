class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        if(n<2)
            return intervals;
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end(),[](vector<int>a,vector<int>b){ if(a[0]== b[0]) return a[1] < b[1]; else return a[0] < b[0];});
        int x=intervals[0][0];
        int y=intervals[0][1];
        for(int i=1;i<n;i++)
        {
            
            if(y>=intervals[i][0] ){
                
                y= y>intervals[i][1]?y:intervals[i][1];
            }
            else
            {
                ans.push_back({x,y});
                x=intervals[i][0];
                y=intervals[i][1];
            }
        }
        ans.push_back({x,y});
        return ans;
    }
};
