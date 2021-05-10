#include<bits/stdc++.h>

using namespace std;

vector<int>adj[100001];
int vis[100001];



void dfs(int node){
    vis[node]=1;

    for(int x : adj[node])
       if(vis[x]==0)
          dfs(x);
}

int main(){

int n,e,u,v;
cin>>n>>e;

for(int i=1;i<=e;i++)
cin>>u>>v , adj[u].push_back(v) , adj[v].push_back(u);
int count=0;

for(int i=1;i<=1;i++)
if(vis[i]==0)
dfs(i), count++;

if(count==1 && e==n-1)
   cout<<"YES";
else
   cout<<"NO";

return 0;

}
