#include <bits/stdc++.h>
using namespace std;

bool equalsum(int a[],int n)
{
		int sum=0;
		for(int i=0;i<n;++i)
		{
			sum+=a[i];	
		}
		
		if(sum%2!=0) return false;
		bool dp[n+1][sum/2+1];
		for(int i=0;i<=sum/2;++i)
		{
			dp[0][i]=false;
		}
		for(int i=0;i<=n;++i)
		{
			dp[i][0]=true;
		}
		for(int i=1;i<=n;++i)
		{
				for(int j=1;j<=sum/2;++j)
				{
						if(a[i-1]<=j)
						{
							dp[i][j]=dp[i-1][j] || dp[i-j][j-a[i-1]];
							}
							else
							{
								dp[i][j]=dp[i-1][j];	
							}
						
				}
		}
		return dp[n][sum/2];
}

int main()
{
int a[]={3,1,1,2,2,1};
int n=sizeof(a)/sizeof a[0];
cout<<equalsum(a,n);	
}
