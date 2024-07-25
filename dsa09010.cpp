#include<bits/stdc++.h>  //chua xong
using namespace std;
#define pb push_back

int a[1005][1005];
int used[1005];
int n, nv, u;

void DFS(int u){
	stack<int> stk;
	stk.push(u);
	used[u]=0;
	//cout << u <<" ";
	while(!stk.empty())
	{
		int s = stk.top();
		stk.pop();
		for(int t=1;t<=n;t++){
			if(a[s][t] && used[t]){
				//cout<<t<<" ";
				used[t]=0;
				stk.push(s);
				stk.push(t);
				break;
			}
		}
	}
}

bool check()
{
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
		memset(used,1,sizeof(used));
		
		int x,y;
		for(int i=1;i<=nv;i++){
			cin >> x >> y;
			a[x][y]=a[y][x]=1;
		}
		
		int ok = 1;
		for(int i=1;i<=n;i++){
			DFS(i);
			if(check()==0){
				ok = 0;
				break;
			}
			memset(used,1,sizeof(used));
		}
		if(ok) cout<< "YES\n";
		else cout<<"NO\n";
	}
}