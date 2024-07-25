#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define nmax 1005

void resolve(){
	int a,b;
	cin >> a >> b;
	vector<int> v[nmax];
	int m,n;
	while(b--){
		cin >> m >> n;
		v[m].pb(n);
		v[n].pb(m);	
	}
	for(int i = 1 ; i <= a ; i++)
	{
		if(!v[i].empty())
		{
			sort(v[i].begin(),v[i].end());
		}
	}
	for(int i = 1 ; i <= a ; i++)
	{
		cout<<i<<": ";
		for(int x:v[i]) cout << x<<" ";
		cout<<"\n";	
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
	
	return 0;
}