#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int a[105];
int n;
int ok,x;
void Try(int i, int sum){
    for(int j=i;j<=n;j++){
        sum += a[j];
        if(ok || sum > x) return;
        if(sum == x){
            ok = 1;
            return;
        }
		else Try(j+1,sum);
        sum -= a[j];
    }
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		int sum =0; 
		ok=0 ;
		for(int i=1;i<=n;i++){
			cin >> a[i];
			sum+=a[i];
		}
		
		if(sum%2){
			cout<< "NO\n";
		}
		else{
			sort(a+1,a+n+1);
			x=sum/2;
			Try(1,0);
			if(ok) cout<<"YES\n";
			else cout<<"NO\n";
		}
		
	}
	return 0;
}