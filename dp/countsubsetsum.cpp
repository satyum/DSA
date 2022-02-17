#include <bits/stdc++.h>
using namespace std;

int countsub(int a[],int n,int sum)
{
	int dp[n+1][sum+1];
	
	for(int i=0;i<=sum;++i)
	{
			dp[0][i]=0;
	}
	for(int i=0;i<=n;++i)
	{
			dp[i][0]=1;
	}
	
	for(int i=1;i<=n;++i)
	{
			for(int j=1;j<=sum;++j)
			{
					if(a[i-1]<=j)
					{
					dp[i][j]=dp[i-1][j] + dp[i-1][j-a[i-1]]	;
					}
					else
					dp[i][j]=dp[i-1][j];
			}
	}
	for(int i=0;i<=n;++i)
	{
			for(int j=0;j<=sum;++j)
			{
				cout<<dp[i][j]<<" ";
			}
			cout<<"\n";
	}
	return dp[n][sum];
}

int main()
{
int a[]={1,2,3,3};
int n=4;
int sum=6;
cout<<countsub(a,n,sum)<<"\n";	
}
