#include <bits/stdc++.h>
using namespace std;


int knapsack(int wt[],int val[],int wa,int n)
{
	int dp[n+1][wa+1];
	memset(dp,-1,sizeof(dp));
	if(wa==0 || n==0)
	return 0;
	
	if(dp[n][wa]!=-1)
	return dp[n][wa];
	
	if(wt[n-1]>wa)
	{
		return dp[n][wa]=knapsack(wt,val,wa,n-1);
	}
	else if(wt[n-1]<wa)
	{
			return dp[n][wa]=max(val[n]+knapsack(wt,val,wa-wt[n-1],n-1),knapsack(wt,val,wa,n-1));
	}
}

int main()
{
int wt[]={10,20,30};
int val[]={60,100,120};
int wa=50;
int n=3;
cout<<knapsack(wt,val,wa,n)<<"\n";

} 
