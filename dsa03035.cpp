#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back



int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	vector<int> f(n,0);
	int res=0;
	for(int i=0;i<n;i++){
		cin >> v[i];
		f[v[i]]=f[v[i]-1]+1;
		res=max(res,f[v[i]]);
	}
	cout<<n-res;
	
	
}