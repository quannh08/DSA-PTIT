#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[1000]={0};
int used[1000]={0};

bool check(){
	for(int i=2;i<n;i++){
		if(a[i]==1|| a[i]==5){
			if(a[i-1]!=1&&a[i-1]!=5 && a[i+1]!=1 && a[i+1]!=5) return 0;
		}
	}
	return 1;
}

void in_kq(){
	if(check()){
		for(int i=1;i<=n;i++){
			cout<< (char)(a[i]-1+'A');
		}
		cout<<"\n";
	}
}

void Try(int i){
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			used[j]=1;
			a[i]=j;
			if(i==n){
				in_kq();
			}
			else Try(i+1);
			used[j]=0;
		}
	}
}

int main(){
	char tmp;
	cin >> tmp;
	n=tmp+1-'A';
	Try(1);
}