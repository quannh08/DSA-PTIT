#include<bits/stdc++.h>
using namespace std;

int n,s;
int a[1005]={0};
int b[1005]={0};
int ok,cnt=0;

bool check(){
	int sum=0;
	for(int i=1;i<=n;i++){
		if(a[i]==1){
			sum+=b[i];
		}
	}
	return (sum==s);
}

void printResult(){
	for(int i=1;i<=n;i++){
		if(a[i])cout<<b[i]<<" ";
	}
	cout<<"\n";
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
	ok=1;
	cin >> n >>s;
	for(int i=1;i<=n;i++){
		cin >> b[i];
	}
	while(ok){
		sinh();
		if(check()){
			cnt++;
			printResult();
		}
	}
	cout<<cnt<<"\n";
}