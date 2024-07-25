#include<bits/stdc++.h>
using namespace std;
int a[1005]={0};
int ok=1;
int n,k;
void sinh(){
	int i=k;
	while(i>0&&a[i]==n-k+i){
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

void resolve(){
	
	cin >> n>> k;
	int check[1005]={0};
	for(int i=1;i<=k;i++){
		cin >> a[i];
		check[a[i]]++;
	}
	sinh();
	int cnt=0;
	for(int i=1;i<=k;i++){
		if(check[a[i]]!=1){
			cnt++;
		}
	}
	if(ok==0)cnt=k;
	cout<<cnt<<"\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ok=1;
		resolve();
	}
}