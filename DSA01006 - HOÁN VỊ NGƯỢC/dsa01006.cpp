#include<bits/stdc++.h>
using namespace std;

int a[1005]={0},n,ok;

void ktao(){
	int k=n;
	for(int i=1;i<=n;i++){
		a[i]=k;
		k--;
	}
}

void sinh(){
	int i=n-1;
	while(i>0&&a[i]<a[i+1]){
		i--;
	}
	if(i==0){
		ok=0;
	}
	else{
		int j=n;
		while(a[j]>a[i])j--;
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
		
		while(ok){
			for(int i=1;i<=n;i++){
				cout<<a[i];
			}
			cout<<" ";
			sinh();
		}
		cout<<"\n";
	}
}