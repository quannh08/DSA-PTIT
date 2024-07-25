#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[100]={0};
vector<string> vstr;
map<string ,int> mp;

void in_kq(){
	for(int i=1;i<=k;i++){
		cout<<vstr[a[i]]<<" ";
	}
	cout<<"\n";
}

void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			in_kq();
		}
		else Try(i+1);
	}
}

int main(){
	cin >> n >> k;
	for(int i=1;i<=n;i++){
		string s;
		cin >> s;
		mp[s]++;
	}
	vstr.push_back("0");
	for(auto x:mp){
		vstr.push_back(x.first);
	}
	sort(vstr.begin(),vstr.end());
	n=vstr.size()-1;
	Try(1);
}