#include <bits/stdc++.h>
using namespace std;


bool subset(int a[],int sum,int n)
{
		bool dp[n+1][sum+1];
		for(int i=0;i<sum+1;++i)
		{
				dp[0][i]=false;
		}
		for(int i=0;i<n+1;++i)
		{
				dp[i][0]=true;
		}
		
		for(int i=1;i<n+1;++i)
		{
			for(int j=1;j<sum+1;++j)
			{
				if(a[i-1]<=j)
				{
						dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i-i]];
				}
				else
				{
					dp[i][j]=dp[i-1][j];
					}
			}	
		}
		return dp[n][sum];
}

int main()
{
	int a[]={3,34,4,12,5,2};
	int sum=1;
	int n=sizeof(a)/sizeof a[0];
	cout<<subset(a,sum,n);
}
