#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[1005]={0};
int b[1005]={0};
int ok=0;
bool check(){
	int sum=0;
	for(int i=1;i<=n;i++){
		if(a[i]==0){
			sum+=b[i];
		}
	}
	return sum==k;
}

void in_kq(){
	if(check()){
		ok=1;
		cout<<"[";
		string str="";
		for(int i=1;i<=n;i++){
			if(!a[i]) str+=to_string(b[i])+" ";
		}
		str.pop_back();
		cout<<str;
		cout<<"] ";
	}
}

void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			in_kq();
		}
		else Try(i+1);
	}
}

void resolve(){
	cin >> n>>k;
	for(int i=1;i<=n;i++){
		cin >> b[i];
	}
	sort(b,b+n+1);
	Try(1);
	if(!ok)cout<<"-1\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
		ok=0;
		cout<<"\n";
	}
}