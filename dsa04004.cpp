#include<bits/stdc++.h>
using namespace std;
#define ll long long

void resolve(){
    ll n,k;
    cin >> n >> k;
    ll a[n+1];
    for(int i=1;i<=n;i++){
        a[i]=pow(2,i-1);
    }
    for(int i=n;i>=1;i--){
        if(k==a[i]){
            cout << i<<"\n";
            return;
        }
        else if(k>a[i]){
            k-=a[i];
        }
    }

}

int main(){
    int t;
    cin >> t;
    while(t--){
        resolve();
    }
}