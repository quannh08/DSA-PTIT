#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> ans,A[1005];
int pa[1005];

bool DFS(int u){
	ans.push_back(u);
	for(auto v:A[u]){
		if(v==1&&pa[u]!=1){
			ans.push_back(1);
			return true;
		}
		if(pa[v]==-1){
			pa[v]=u;
			if(DFS(v)) return true;
			ans.pop_back();
		}
	}
	return false;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int N,M;
		cin>>N>>M;
		ans.clear();
		for(int i=1;i<=N;i++){
			A[i].clear();
			pa[i]=-1;
		}
		pa[1]=0;
		while(M--){
			int u,v;
			cin>>u>>v;
			A[u].push_back(v);
			A[v].push_back(u);
		}
		for(int i=1;i<=N;i++) sort(A[i].begin(),A[i].end());
		if(DFS(1)) for(auto x:ans) cout<<x<<" ";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}