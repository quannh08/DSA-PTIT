#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int mod = 1e9+7;
ll power(ll a,ll n){
	if(n==0)return 1;
	ll x=power(a,n/2);
	if(n%2==0)
		return ((x*x)%mod);
	return (a*((x*x)%mod))%mod;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		cout<<power(n,k)<<"\n";
	}
}