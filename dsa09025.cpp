#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int a[1005][1005];
int used[1005];
int pre[1005];
int n, nv, u, v;


void DFS(int u){
	stack<int> stk;
	stk.push(u);
	used[u]=0;
	pre[u]=0;
	while(!stk.empty())
	{
		int s = stk.top();
		stk.pop();
		for(int t=1;t<=n;t++){
			if(a[s][t] && used[t]){
				pre[t]=s;
				used[t]=0;
				stk.push(s);
				stk.push(t);
				if(t==v) return;
				break;
			}
		}
		
	}
}

void path(){
	if(pre[v]==0){
		cout<<"-1\n";
		return;
	}
	vector<int> vp;
	int tmp=v;
	while(tmp){
		vp.pb(tmp);
		tmp=pre[tmp];
	}
	sort(vp.begin(),vp.end());
	for(int x:vp) cout<<x<<" ";
	cout<<"\n";
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
			a[x][y]=1;
		}
		
		DFS(u);
		path();
		cout<<"\n";
	}
}