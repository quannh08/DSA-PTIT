#include<bits/stdc++.h>
using namespace std;

int n;
int a[100]={0},ok;

bool check(){
	if(a[1]!=1 || a[n]!=0)return 0;
	for(int i=1;i<=n;i++){
		if(i<n && a[i]==1&&a[i+1]==1)return 0;
		if(i<n-2 && a[i]==0){
			if(a[i+1]==0&&a[i+2]==0&&a[i+3]==0)return 0;
		}
	}
	return 1;
}

void printResult(){
	for(int i=1;i<=n;i++){
		if(a[i]==0)cout<<6;
		else cout<<8;
	}
	cout<< "\n";
}

void sinh(){
	int i=n;
	while(i>0 && a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0){
		ok=0;
	}
	else{
		a[i]=1;
	}
}

int main(){
	cin >> n;
	ok=1;
	while(ok){
		if(check()){
			printResult();
		}
		sinh();
	}
}