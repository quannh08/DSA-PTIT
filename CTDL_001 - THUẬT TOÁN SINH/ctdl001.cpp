#include<bits/stdc++.h>
using namespace std;

int a[100]={0};
int n,ok;
void sinh(){
	int i=n;
	while(i>0&&a[i]==1){
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

bool tn(){
	for(int i=1;i<=n/2;i++){
		if(a[i]!=a[n-i+1]){
			return 0;
		}
	}
	return 1;
}
void print(){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}

int main(){
	cin >> n;
	ok=1;
	while(ok){		
		if(tn()){
			print();
		}
		sinh();
	}
}