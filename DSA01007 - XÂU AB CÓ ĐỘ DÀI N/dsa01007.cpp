#include<bits/stdc++.h>
using namespace std;

int a[1005]={0},n,ok;

void print(){
	for(int i=1;i<=n;i++){
		if(a[i]==0)cout<<"A";
		else cout<<"B";
	}
}

void sinh(){
	int i=n;
	while(i>0&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0)ok=0;
	else{
		a[i]=1;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		ok=1;
		while(ok){
			print();
			cout<<" ";
			sinh();
		}
		cout<<"\n";
	}
}