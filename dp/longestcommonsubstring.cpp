#include <bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2)
{
	int m=s1.length();
	int n=s2.length();
	int dp[m+1][n+1];
	int res=0;
	for(int i=0;i<=m;++i)
	{
			for(int j=0;j<=n;++j)
			{
				if(i==0 || j==0)
				{
						dp[i][j]=0;
				}
				else if(s1[i-1]==s2[j-1])
				{
					dp[i][j]=1+dp[i-1][j-1];
					res= max(res,dp[i][j]);
				}
				else
				{
					dp[i][j]=0;
				}
			}
	}
	return res;
}

int main()
{
string s1="abcdef";	
string s2="abcdlkj";
cout<<lcs(s1,s2)<<endl;
}
