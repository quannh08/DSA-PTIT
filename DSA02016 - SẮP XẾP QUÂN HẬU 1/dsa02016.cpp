#include<bits/stdc++.h>
using namespace std;
int n,X[100]={0},col[100]={0},d1[100]={0},d2[100]={0};
int cnt=0;

void Try(int i){
	for(int j=1;j<=n;j++){
		if(col[j] == 0 && d1[i-j+n] ==0 && d2[i+j-1] ==0){
			X[i]=j;
			col[j]=d1[i-j+n]=d2[i+j-1]=1;
			if(i == n)
				cnt++;
			else 
				Try(i+1);
				
			col[j]=d1[i-j+n]=d2[i+j-1]=0;
		}
	}
}

void resolve(){
	cin >>n;
	cnt=0;
	Try(1);
	cout<<cnt<<"\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}