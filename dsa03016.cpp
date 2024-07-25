#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int s,d;

void resolve(){
	cin >> s >> d;
	int a[1000];
	if(d*9<s){
		cout<<-1;
		return;
	}
	int sum = s;
	a[1]=1;
	--sum;
	for(int i=d;i>1;i--){
		a[i]=min(9,sum);
		sum -= a[i];
	}
	if(sum>0) a[1]+=sum;
	for(int i=1;i<=d;i++) cout<<a[i];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
		cout<<"\n";
	}
}