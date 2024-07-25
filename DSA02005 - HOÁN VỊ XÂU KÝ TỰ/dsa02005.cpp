#include<bits/stdc++.h>
using namespace std;

int a[1005]={0};
int used[1005]={0};
int n;
string s;


void printResult(){
	for(int i=1;i<=n;i++){
		cout<<s[a[i]-1];
	}
	cout<<" ";
}

void Try(int i){
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			used[j]=1;
			a[i]=j;
		
		if(i==n){
			printResult();
		}
		else Try(i+1);
		used[j]=0;
		}
	}
}

void resolve(){
	
	cin >> s;
	n=s.length();
	Try(1);
	cout<<"\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}