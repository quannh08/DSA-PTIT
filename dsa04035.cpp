#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 100000007
ll power(ll a,ll b){
	if(b==0) return 1;
	ll x=power(a,b/2);
	if(b%2==0) return (x*x)%mod;
	return (a*((x*x)%mod))%mod;
}

int main(){
	ll a,b;
	while(1){
		cin >> a >> b;
		if (a==0 && b==0 ) return 0;
		cout<< power(a,b)<<"\n";
	}
}