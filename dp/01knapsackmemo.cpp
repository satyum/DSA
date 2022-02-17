#include <bits/stdc++.h>
using namespace std;

int knapsack(int wt[],int val[],int n,int w)
{
	int dp[n+1][w+1];
	for(int i=0;i<n+1;i++)
	{
			for(int j=0;j<w+1;++j)
			{
					if(i==0||j==0)
					{
						dp[i][j]=0;
					}
					else if (wt[i-1]<=j)
					{
							dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
					}
					else
					{
							dp[i][j]=dp[i-1][j];
						}
			}
	}
		
		return dp[n][w];
		

}

int main()
{
int val[]={60,100,120};
int wt[]={10,20,30};
int w=50;
int n=3;
cout<<knapsack(wt,val,n,w)<<"\n";	
}
