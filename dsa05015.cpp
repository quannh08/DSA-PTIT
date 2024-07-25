#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int mod = 1e9+7;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		ll re=1;
		for(int i=0;i<k;i++){
			re*=n-i;
			re%=mod;
		}
		cout<<re<<"\n";
	}
}