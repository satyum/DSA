#include<bits/stdc++.h>

using namespace std;

class Solution{
public:
	vector<int>bfsgraph(int v,vector<int>adj[]){
	vector<int>ansvector;
	queue<int>q;
	q.push(0);
	vector<int>vis(v,0);
	vis[0]=1;;



	while(!q.empty()){
	int data=q.front();
	q.pop();
	ansvector.push_back(data);

	for(auto it : adj[data]){
           if(!vis[it]){
		q.push(it);
		vis[it]=1;
	      }
           }
	}
	return ansvector;
    }
};

//drivers code

int main(){
int tc;
cin>>tc;
while(tc--){
	int v,e;
	cin>>v>>e;
	vector<int>adj[v];

	for(int i=0;i<e;i++){
	    int u,v;
	    cin>>u,v;
	    adj[u].push_back(v);
	    adj[v].push_back(u);

	   }

	Solution obj;
	vector<int>ans=obj.bfsgraph(v,adj);
	for(int i=0;i<ans.size();i++){
	    cout<<ans[i]<<" ";
	   }
	cout<<endl;
	}
	return 0;
}

//end of driver code
