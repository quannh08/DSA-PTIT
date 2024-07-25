#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int used[1005];
int n,nv,u;
int a[1005][1005];

void DFS(int u){
	stack<int> stk;
	used[u]=0;
	cout<<u<<" ";
	stk.push(u);
	while(!stk.empty()){
		int s=stk.top();
		stk.pop();
		for(int t = 1; t <= n; t++){
			if(a[s][t] && used[t]){
				used[t]=0;
				cout<<t<<" ";
				stk.push(s);
				stk.push(t);
				break;
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> nv >> u;
		memset(used,1,sizeof(used));
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;i++) cout<<used[i]<<"-";
		int x,y;
		for(int i=1;i<=nv;i++){
			cin >> x >> y;
			a[x][y]=a[y][x]=1;
		}
		DFS(u);
		cout<<"\n";
	}
}