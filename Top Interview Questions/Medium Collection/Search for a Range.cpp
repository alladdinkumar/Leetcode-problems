class Solution {
public:
    vector<int> searchRange(vector<int>& a, int target) {
        int n=a.size();
        int l=0,r=n-1;
        int pos=-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(a[mid]==target){
                pos=mid;
                break;
            }
            if(a[mid]<target)
                l=mid+1;
            else
                r=mid-1;
        }
        if(pos==-1)
            return {-1,-1};
        l=pos;
        r=pos;
        while(l-1>=0 && a[l]==a[l-1])
            l--;
        while(r+1<n && a[r]==a[r+1])
            r++;
        return {l,r};
    }
};
