#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

ll mod = 1e9 + 7;
vector<ll> fibo;

int main(){
	int t;
	cin >> t;
	fibo.pb(0);
	fibo.pb(1);
	while(t--){
		int n;
		cin >> n;
		for(int i=2;i<=n;i++){
			fibo[i]=(fibo[i-1] + fibo[i-2]) % mod;
		}
		cout<<fibo[n]<<"\n";
	}
}