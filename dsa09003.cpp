#include<bits/stdc++.h>
using namespace std;
#define pb push_back

void resolve(){
	int a,b;
	cin >> a>> b;
	vector<int> v[1005];
	int m ,n;
	for(int i=1;i<=b;i++){
		cin >> m >> n;
		v[m].pb(n);
	}
	
	for(int i=1;i<=a;i++){
		sort(v[i].begin(),v[i].end());
	}
	
	for(int i=1;i<=a;i++){
		cout<<i<<": ";
		for(int x: v[i])cout<<x<<" ";
		cout<<"\n";
	}
	return ;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}