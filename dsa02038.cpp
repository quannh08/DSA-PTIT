#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int n,k;
int a[1005]={0};
int b[1005];

void result(){
	for(int i=1;i<=k;i++){
		cout<<b[a[i]]<<" ";
	}
	cout<<"\n";
}

void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k) result();
		else Try(i+1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=1;i<=n;i++){
			cin>> b[i];
		}
		sort(b+1,b+n+1);
		Try(1);
	}
}