#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int a[100];
int n,ok ;
string str;

void sinh(){
	int i=n-2;
	while(str[i]>=str[i+1]){
		i--;
	}
	if(i<0) ok =0;
	else{
		for(int j=n-1;j>=i+1;j--){
			if(str[j]>str[i]){
				swap(str[i],str[j]);
				break;
			}
		}
		int l=i+1,r=n-1;
		while(l<r){
			swap(str[l],str[r]);
			l++;r--;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int test;
		ok=1;
		cin >> test;
		cin >> str;
		n=str.length();
		sinh();
		if(ok){
			cout<< test<<" "<<str<<"\n";
		}
		else cout<<test<<" BIGGEST\n";
	}
}