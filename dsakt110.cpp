#include<bits/stdc++.h>
using namespace std;
#define ll long long

void resolve(){
	int n;
	cin >> n;
	int a[n+5];
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}	
	ll dp[n+5];
	dp[1]=a[1];
	dp[2]=max(a[1],a[2]);
	for(int i=3;i<=n;i++){
		dp[i]=max(dp[i-1],dp[i-2]+a[i]);
	}
	cout<< dp[n]<<"\n";
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}