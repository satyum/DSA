#include<bits/stdc++.h>

using namespace std;

class Solution{

public:

	vector<int>store;
	void pattern(int node,vector<int> &vis,vector<int>adj[]){
	vis[node]=1;
	store.push_back(node);

	for(auto x:adj[node]){
            if(!vis[x]){
		pattern(x,vis,adj);
	    }
	  }
	}

	vector<int>dfsofgraph(int v,vector<int>adj[]){
	vector<int> vis(v,0);
	pattern(0,vis,adj);
	return store;
	}
};

int main(){
int tc;
cin>>tc;
while(tc--){
    int n,e;
    cin>>n>>e;

    vector<int>adj[n];
    for(int i=0;i<e;++i){
	int u,v;
	cin>>u>>v ,adj[u].push_back(v) ,adj[v].push_back(u);
    }

    Solution obj;
    vector<int>ans=obj.dfsofgraph(n,adj);
    for(int i=0;i<ans.size();i++){
	cout<<ans[i]<<" ";
    }
    cout<<endl;
 }
return 0;
}
