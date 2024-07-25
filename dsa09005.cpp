#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int n, nv ,u;
int a[1005][1005];
int used[1005];

void BFS(int u){
	queue<int> qe;
	used[u]=0;
	qe.push(u);
	cout<<u<<" ";
	while(!qe.empty()){
		int s=qe.front();
		qe.pop();
		for(int t=1;t<=n;t++){
			if(used[t] && a[s][t]){
				used[t]=0;
				cout<< t<<" ";
				qe.push(t);
			}
		}
	}
}


int main(){
	int t;
	cin>> t;
	while(t--){
		cin >> n >> nv >> u;
		memset(a,0,sizeof(a));
		memset(used,1,sizeof(used));
		int x,y;
		for(int i=0;i<nv;i++){
			cin >> x >> y;
			a[x][y]=a[y][x]=1;
		}
		BFS(u);
		cout<<"\n";
	}
}