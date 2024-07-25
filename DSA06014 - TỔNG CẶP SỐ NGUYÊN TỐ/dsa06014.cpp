#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1000005]={0};

void Snt(int n){
	a[0]=a[1]=1;
	for(int i = 2 ; i * i <= n ; i++){
		if(!a[i]){
			for(int j = 2 ; j * i <= n ; j++){
				a[i * j]=1;
			}
		}
	}
}

void resolve(){
	int n;
	cin >> n;
	Snt(n);
	int i;
	int check = 1;
	for(i = 2 ; i <= n / 2 ;i++){
		if(a[i] == 0 && a[n-i] == 0){
			check = 0;
			break;
		}
	}
	if(check)cout<<"-1";
	else cout<<i<<" "<<n-i;
	cout<<endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}