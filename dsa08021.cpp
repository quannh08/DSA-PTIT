#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
#define ll long long 

void resolve(){
	int m,n;
	cin >> m >> n;
	int a[m+5][n+5];
	memset(a,0,sizeof(a));
	int res[m+5][n+5];
	memset(res,0,sizeof(res));
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin >> a[i][j];
		}
	}
	
	queue<pair<int,int>> st;
	st.push({1,1});
	
	while(!st.empty()){
		pair<int,int>tmp = st.front();
		st.pop();
		int x=tmp.first;
		int y=tmp.second;
		
		if(a[x][y+a[x][y]] && !res[x][y+a[x][y]]){
			res[x][y+a[x][y]] = res[x][y]+1;
			st.push({x,y+a[x][y]});
		}
		if(a[x+a[x][y]][y] && !res[x+a[x][y]][y]){
			res[x+a[x][y]][y] = res[x][y]+1;
			st.push({x+a[x][y],y});
		}
	}
	if(!res[m][n]) cout<<"-1\n";
	else cout<< res[m][n]<<"\n";
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}