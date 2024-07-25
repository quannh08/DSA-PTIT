#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long 

int mod =1e9+7;

ll power(ll a,ll b){
	if(b==0) return 1;
	ll x = power(a,b/2);
	if(b%2==0) return (x*x)%mod;
	return (a*((x*x) %mod))% mod;
}

void resolve(){
	string a,b;
	cin >> a >> b;
	int n1 =a.length()-1;
	int n2 =b.length()-1;
	ll s1=0,s2=0;
	for(int i=n1;i>=0;i--){
		if(a[i]=='1'){
			s1+=power(2,n1-i);
		}	
	}
	for(int i=n2;i>=0;i--){
		if(b[i]=='1'){
			s2+=power(2,n2-i);
		}	
	}
	
	cout<<s1*s2<<"\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}