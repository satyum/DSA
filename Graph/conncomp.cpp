#include<bits/stdc++.h>

using namespace std;

vector<int>adj[100001];
int vis[100001];

void dfs(int node){
	vis[node]=1;
	for(int x: adj[node])
	    if(!vis[x])
	    dfs(x);

}

int main(){
int n,e,u,v;
cin>>n>>e;
for(int i=0;i<e;++i)
    cin>>u>>v , adj[u].push_back(v),adj[v].push_back(v);

    int count=0;

    for(int i=1;i<=n;++i)
	if(!vis[i]){
	   dfs(i) ,count++;

	}
	cout<<count;

}
