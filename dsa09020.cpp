#include<bits/stdc++.h>
using namespace std;
#define pb push_back


int main(){
	int n;
	cin >> n ;
	cin.ignore();
	int a[1005][1005];
	memset(a,0,sizeof(a));
	string line,num;
	for(int i=1;i<=n;i++){
		getline(cin,line);
		stringstream ss(line);
		while(ss >> num){
			int x=stoi(num);
			a[i][x]=1;
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<< a[i][j]<<" ";
		}
		cout<<"\n";
	}