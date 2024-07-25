#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define MAX 100005

int n;
int X[1005]={0};
int a[1005]={0};
map<string,int> mp;
void Init(){
	for(int i=0;i<=n;i++){
		X[i]=0;
	}
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i];	
	}
	sort(a+1,a+n+1,greater<int>());
}

bool nto(ll s){
	if(s<2) return 0;
	if(s==2 || s==3) return 1;
	if(s%2==0 || s%3==0) return 0;
	int i=5;
	while(i*i<=s){
		if(s%i==0 || s%(i+2)==0) return 0;
		i+=6;
	}
	return 1;
}

void result(){
	ll sum=0;
	for(int i=1;i<=n;i++){
		sum+=a[i]*X[i];
	}
	if(nto(sum)){
		string tmp="";
		for(int i=1;i<=n;i++){
			if(X[i]) tmp+=to_string(a[i])+" ";
		}
		mp[tmp]++;
	}
}

void Back_Tracking(int i){
	for(int j=0;j<=1;j++){
		X[i]=j;
		if(i==n){
			result();
		}
		else Back_Tracking(i+1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		Init();
		Back_Tracking(1);
		for(auto x:mp){
			cout<<x.first<<"\n";
		}
		mp.clear();
	}
	
}