#include<bits/stdc++.h>
using namespace std;

void resolve(){
	int n,x;
	cin >> n >> x;
	int a[n+5];
	int tmp = 0;
	for(int i = 0 ;i < n ; i++){
		cin >> a[i];
		if(a[i]==x)tmp=i+1;
	}
	cout<< tmp<<"\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}