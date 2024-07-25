#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int mod = 1e9+7;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		priority_queue<ll,vector<ll>,greater<ll>> pq;
		
		for(int i=0;i<n;i++){
			ll x;
			cin >> x;
			pq.push(x);
		}
		ll sum = 0;
		while(pq.size()>1){
			ll s1=pq.top();
			pq.pop();
			ll s2=pq.top();
			pq.pop();
			sum += (s1+s2) % mod;
			pq.push((s1+s2)%mod);
		}
		cout<<sum<<endl;
	}
}