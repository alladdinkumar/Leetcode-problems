#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x,cnt=1;
		for(int i=1;i<=n;i++)
		{
			int temp;
			if(i%2==0)
			{
				temp=cnt+n-1;
			}
			for(int j=1;j<=n;j++)
			{
				if(i%2==0)
				{
					cout<<temp--<<" ";
					cnt++;
				}
				else
					cout<<cnt++<<" ";
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
}

