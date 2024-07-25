#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long


void resolve(){
	int n;
	cin >> n;
	ll a[n+1]={0};
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	
	ll dp[n+1]={0};
	dp[1]=a[1];
	dp[2]=max(a[1],a[2]);
	ll res=0;
	for(int i=3;i<=n;i++){
		dp[i]=max(dp[i-2]+a[i],dp[i-1]);
	}
	cout<<dp[n]<<"\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}