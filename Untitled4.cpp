#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long


void resolve(){
	int n;
	cin >> n;
	int a[1005]={0};
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	
	ll dp[1005] = {0};
	ll re=0;
	for(int i=1;i<=n;i++){
		dp[i]=a[i];
		for(int j=1;j<=i;j++){
			if(a[i]>a[j]){
				dp[i]=dp[j]+a[i];
			}
			re=max(dp[i],re);
		}
	}
	cout<< re<<"\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}