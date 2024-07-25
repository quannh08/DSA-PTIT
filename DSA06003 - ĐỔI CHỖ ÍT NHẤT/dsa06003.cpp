#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void resolve(){
	int n;
	cin >> n;
	int a[n+5];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int cnt=0;
	for(int i=0;i<n-1;i++){
		int res=i;
		for(int j=i+1;j<n;j++){
			if(a[res]>a[j])res = j;
		}
		if(res!=i){
			cnt++;
			swap(a[res],a[i]);
		}
	}
	cout<<cnt<<"\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}