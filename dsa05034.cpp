#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int mod = 1e9+7;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		ll res[n+1]={0};
		res[0]=1;
		res[1]=1;
		for(int i=2;i<=n;i++){
			int tmp;
			if(i<=k) tmp=0;
			else tmp=i-k;
			for(int j=tmp;j<i;j++){
				res[i]+=res[j];
				res[i] %=mod;
			}
		}
		cout<<res[n]<<"\n";
	}
}