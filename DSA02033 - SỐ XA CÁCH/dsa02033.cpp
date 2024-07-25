#include<bits/stdc++.h>
using namespace std;

int n,a[1000]={0};
int used[1000]={0};

bool check(){
	for(int i=2;i<=n;i++){
		if(a[i]==a[i-1]+1||a[i]==a[i-1]-1)return 0;
	}
	return 1;
}

void inkq(){
	if(check()){
		for(int i=1;i<=n;i++){
			cout<<a[i];
		}
		cout<<"\n";
	}
}

void Try(int i){
	for(int j=1;j<=n;j++){
		if(used[j] == 0){
				used[j]=1;
				a[i]=j;
				if(i==n){
					inkq();
				}
				else Try(i+1);
				used[j]=0;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Try(1);
	}
}