#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define MAX 100005

int a[1005]={0},X[1005]={0};
map<string,int> mp;
int n;

bool check(){
	vector<int> vp;
	for(int i=1;i<=n;i++){
		if(X[i])vp.pb(a[i]);
	}
	if(vp.size()>1){
		for(int i=1;i<vp.size();i++){
			if(vp[i]<vp[i-1])return 0;
		}
		return 1;
	}
	else return 0;
}

void Result(){
	if(check()){
		string str="";
		for(int i=1;i<=n ;i++){
			if(X[i])str+=to_string(a[i])+" ";
		}
		mp[str]=1;
	}
}

void Try(int i){
	for(int v:{0,1}){
		X[i]=v;
		if (i==n){
			Result();
		}
		else Try(i+1);
	}
}

int main(){
	cin >> n;
	for (int i=1;i<=n;i++)cin >> a[i];
	Try(1);
	for (auto x:mp){
		cout << x.first <<"\n";
	}
}