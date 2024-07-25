#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int n,nv;
int a[1005][1005];
int used[1005];

void DFS(int u){
	stack<int> stk;
	used[u]=0;
	stk.push(u);

	while(!stk.empty()){
		int s=stk.top();
		stk.pop();
		for(int t = 1; t <= n; t++){
			if(a[s][t] && used[t]){
				used[t]=0;
			
				stk.push(s);
				stk.push(t);
				break;
			}
		}
	}
	
}


bool checkLT(){
	for(int i=1;i<=n;i++){
		if(used[i]) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> nv;
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;i++) used[i]=1;
		for(int i=1;i<=nv;i++){
			int x,y;
			cin >> x >> y;
		 	a[x][y]=a[y][x]=1;
		}

		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				if(a[i][j]){
					a[i][j]=a[j][i]=0;
					
					DFS(1);
					if(!checkLT()) cout<< i<<" "<<j<<" ";
				
				a[i][j]=a[j][i]=1;
				for(int k=1;k<=n;k++) used[k]=1;
				}
			}
		}
		cout<<"\n";
	}
	return 0;
}