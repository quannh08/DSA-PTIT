#include<bits/stdc++.h>
using namespace std;
#define pb push_back


int main(){
	int n;
	cin >> n;
	int a[1005][1005];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> a[i][j];
		}
	}
	
	vector<int> v[1000];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]){
				v[i].pb(j);		
			}
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int x: v[i]) cout<<x<<" ";
		cout<<"\n";
	}
}