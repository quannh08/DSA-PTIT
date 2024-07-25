#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int a[1005][1005];
int used[1005];
int pre[1005];
int n, nv, u, v;


void BFS(int u){
	queue<int> qe;
	qe.push(u);
	used[u]=0;
	while(!qe.empty()){
		int s=qe.front();
		qe.pop();
		for(int t=1;t<=n;t++){
			if(a[s][t] && used[t]){
				used[t]=0;
				qe.push(t);
				pre[t]=s;
			}
		}
	}
}

void path(){
	if(pre[v]==0){
		cout<<"-1\n";
		return;
	}
	stack<int> stk;
	int tmp=v;
	while(tmp){
		stk.push(tmp);
		tmp=pre[tmp];
	}
	while(!stk.empty()){
		cout<<stk.top()<<" ";
		stk.pop();
	}

}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> nv >> u >> v;
		memset(a,0,sizeof(a));
		memset(used,1,sizeof(used));
		memset(pre,0,sizeof(pre));
		int x,y;
		for(int i=1;i<=nv;i++){
			cin >> x >> y;
			a[x][y]=a[y][x]=1;
		}
		
		BFS(u);
		path();
		cout<<"\n";
	}
}