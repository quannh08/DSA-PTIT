#include<bits/stdc++.h>
using namespace std;
int n,k;
map<string, int> name;
vector<string> v;
int a[1005]={0};

void print_kq(){
	for(int i=1;i<=k;i++){
		cout<<v[a[i]]<<" ";
	}
	cout<<"\n";
}

void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			print_kq();
		}
		else{
			Try(i+1);
		}
	}
	
}

int main(){
	cin >> n>> k;
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		name[s]++;
	}
	v.push_back("0");
	for(auto x:name){
		v.push_back(x.first);
	}
	n=v.size()-1;
	Try(1);
}