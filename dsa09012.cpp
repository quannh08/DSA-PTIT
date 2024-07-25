#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int n,nv;
int a[1005][1005];
int used[1005];

void DFS(int u){
	stack<int> stk;
	stk.push(u);
	used[u]=0;
	while(!stk.empty()){
		int s=stk.top();
		stk.pop();
		for(int t=1;t<=n;t++){
			if(a[s][t] && used[t]){
				used[t]=0;
				stk.push(s);
				stk.push(t);
				break;
			}
		}
	}
}

bool check(){
	for(int i=1;i<=n;i++){
		if(used[i]) return 1;
	}
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> nv;
		memset(a,0,sizeof(a));
		memset(used,1,sizeof(used));
		int x,y;
		for(int i=0;i<nv;i++){
			cin >> x >> y;
			a[x][y]=a[y][x]=1;
		}
		
		for(int i=1;i<=n;i++){
			used[i]=0;
			if(i==1) DFS(2);
			else DFS(1);
			if(check()){
				cout << i<<" ";
			}
			memset(used,1,sizeof(used));
		}
		
		cout<< "\n";
	}
}