#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int n,k,a[1005],ok;


void sinh(){
	int i=k;
	while(a[i]==n-k+i){
		i--;
	}
	if(i==0){
		ok=0;
	}
	else{
		a[i]++;
		
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		ok=1;
		map<int,int> mp;
		for(int i=1;i<=k;i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		sinh();
		if(ok){
			int cnt=0;
			for(int i=1;i<=k;i++){
				
				if(mp[a[i]]==0){
					cnt++;
				} 
			}
			cout<<cnt<<"\n";
		}
		else cout<<k<<"\n";
	}
}