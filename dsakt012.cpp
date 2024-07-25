#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int n;
ll s;
int a[100],b[100];
int res=1e9;
ll cnt=0;
bool ok=0;

void result(){
	res=cnt;
	ok =true;
}

void Try(int i,int pos,ll sum){
	for(int j=pos+1;j<=n;j++){
		if(sum+a[j]<=s){
			++cnt;
			sum+=a[j];
			if(sum==s){
				result();
			}
			else if(sum<s&&cnt<res) Try(i+1,j,sum);
			sum-=a[j];
			--cnt;
		}
	}
}

int main(){
	cin>>n>>s;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,greater<int>());
	Try(1,0,0);
	if(ok) cout<<res;
	else cout<<-1;
	
}