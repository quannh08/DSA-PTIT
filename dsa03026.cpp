#include<bits/stdc++.h>
using namespace std;
#define pb push_back



int main(){
	int n,s;
	cin >> n >> s;
	if(n*9<s||s==0) {
		cout<<"-1 -1";
		return 0;
	}
	int a1[n+1],a2[n+2];
	int sum1,sum2;
	sum1=sum2=s;
	
	a1[1]=1;
	sum1--;
	for(int i=n;i>1;i--){
		a1[i]=min(sum1,9);
		sum1-=a1[i];
	}
	if(sum1>0){
		a1[1]+=sum1;
		sum1=0;
	}
	
	for(int i=1;i<=n;i++){
		a2[i]=min(sum2,9);
		sum2-=a2[i];
	}
	
	if(sum1>0||sum2>0) cout<<"-1 -1";
	else {
		for(int i=1;i<=n;i++){
			cout<<a1[i];
		}
		cout<<" ";
		for(int i=1;i<=n;i++){
			cout<<a2[i];
		}
	}
	return 0;
}