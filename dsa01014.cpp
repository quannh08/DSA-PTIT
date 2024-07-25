#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int n,k,s;
int a[100]={0};
int cnt;
void result(){
	int sum=0;
	for(int i=1;i<=k;i++) sum+=a[i];
	if(sum==s) cnt++;
	return ;
}

void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k) result();
		else Try(i+1);
	}
}

int main(){
	while(1){
		cin >> n >> k >> s;
		if(n==0&& k==0 && s==0) return 0;
		cnt=0;
		if( n<k ){
			cout<<0<<"\n";
		}
		else {
			Try(1);
			cout<<cnt<<"\n";
		}
		
	}
}