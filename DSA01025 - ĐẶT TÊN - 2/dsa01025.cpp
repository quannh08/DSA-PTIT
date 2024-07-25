#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[1005]={0},ok;

void ktao(){
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
}

void sinh(){
	int i=k;
	while(i>0 && a[i]==n-k+i){
		i--;
	}
	
	if(i==0)ok=0;
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
		ok=1;
		cin >> n>>k;
		ktao();
		while(ok){
			for(int i=1;i<=k;i++){
				char tmp='A'+a[i]-1;
				cout<<tmp;
			}
			cout<<"\n";
			sinh();
		}
	}
}