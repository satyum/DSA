#include<bits/stdc++.h>

using namespace std;

int main(){
int v,e;
cin>>v>>e;

vector<int>adj[v+1];
while(e--){
int u,v;
cin>>u>>v;
adj[u].push_back(v);
adj[v].push_back(u);
}
return 0;

}
