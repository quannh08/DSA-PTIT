#include<bits/stdc++.h>
using namespace std;

int a[1005]={0};
int n,k;
map<int,int> mp;
vector<int> vp;

void inkq(){
	for(int i=1;i<=k;i++){
		cout<<vp[a[i]]<<" ";
	}
	cout<<"\n";
}

void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			inkq();
		}
		else{
			Try(i+1);
		}
	}
}

int main(){
	cin >> n >> k;
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		mp[x]++; 
	}
	n=mp.size();
	vp.push_back(0);
	for(auto x:mp){
		vp.push_back(x.first);
	}
	Try(1);
}