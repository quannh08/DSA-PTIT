#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int mod = 1e9+7;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll res[n+1]={0};
		res[0]=1;
		res[1]=1;
		for(int i=2;i<=n;i++){
			int tmp;
			if(i<=3) tmp=0;
			else tmp= i-3;
			for(int j=tmp;j<i;j++){
				res[i]+=res[j];
				res[i]%=mod;
			}
		}
		cout<< res[n]<<"\n";
	}
}