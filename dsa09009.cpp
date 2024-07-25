#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int a[1005][1005];
int used[1005];
int n, nv, u;

void BFS(int u){
	queue<int> qe;
	qe.push(u);
	used[u]=0;
	//cout<<u<<" ";
	while(!qe.empty()){
		int s = qe.front();
		qe.pop();
		for(int t=1;t<=n;t++){
			if(a[s][t] && used[t]){
				//cout<<t<<" ";
				used[t] = 0;
				qe.push(t);
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> nv ;
		memset(a,0,sizeof(a));
		memset(used,1,sizeof(used));
		
		int x,y;
		for(int i=1;i<=nv;i++){
			cin >> x >> y;
			a[x][y]=a[y][x]=1;
		}
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(used[i]){
				BFS(i);
				cnt++;
			}
		}
		cout<<cnt<<"\n";
	}
}