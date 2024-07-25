#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
	ll mod=1e9+7;
	int t;
	cin >> t;
	while(t--){
		ll sum=0;
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i=0;i<n;i++){
			cin >> v[i];
		}
		sort(v.begin(),v.end());
		for(int i=1;i<n;i++){
			sum+=v[i]*i;
			sum%=mod;
		}
		cout<<sum<<endl;
	}
}