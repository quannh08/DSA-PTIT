#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[1000]={0};

void in_kq(){
	for(int i=1;i<=k;i++){
		cout<< (char)(a[i]+'A');
	}
	cout<<"\n";
}

void Try(int i){
	for(int j=a[i-1];j<n;j++){
		a[i]=j;
		if(i==k){
			in_kq();
		}
		else Try(i+1);
	}
}

int main(){
	//a[0]=1;
	char tmp;
	cin >> tmp >> k;
	n=tmp+1-'A';
	
	Try(1);
}