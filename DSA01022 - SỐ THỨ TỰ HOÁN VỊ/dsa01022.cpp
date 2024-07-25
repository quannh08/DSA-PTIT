#include<bits/stdc++.h>
using namespace std;
int n,a[1005]={0};
int b[1005]={0},ok;

void ktao(){
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
}
bool check(){
	for(int i=1;i<=n;i++){
		if(a[i]!=b[i])return 0;
	}
	return 1;
}

void sinh(){
	int i=n-1;
	while(i>0&&a[i]>a[i+1]){
		i--;
	}
	if(i==0){
		ok=0;
	}
	else{
		int j=n;
		while(a[i]>a[j]) j--;
		swap(a[i],a[j]);
		int l=i+1,r=n;
		while(l<r){
			swap(a[l],a[r]);
			l++;r--;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ok=1;
		ktao();
		int cnt=1;
		for(int i=1;i<=n;i++){
			cin >> b[i];
		}
		while(!check()){
			sinh();
			cnt++;
		}
		cout<<cnt<<"\n";
	}
}