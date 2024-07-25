#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
ll fibo[100];

char solve(ll n, ll k){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k <= fibo[n-2]) return solve(n-2,k);
	return solve(n-1,k-fibo[n-2]);
}

int main(){
	int t;
	cin >> t;
	fibo[1]=1;
	fibo[2]=1;
	for(int i=3;i<=93;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
	while(t--){
		ll n,k;
		cin >> n >> k;
		cout<<solve(n,k)<<"\n";
	}
}