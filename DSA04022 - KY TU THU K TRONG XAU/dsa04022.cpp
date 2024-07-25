#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void resolve(){
    ll n,k;
    cin >> n >> k;
    vector<ll> vp;
    vp.pb(0);
    for(int i=1;i<=n;i++){
        ll x = pow(2,i-1);
        vp.pb(x);
    }

    for(int i=n;i>=1;i--){
        if(k == vp[i]){
            cout << char('A'-1+i)<<"\n";
            return;
        }
        else if(k > vp[i]){
            k-=vp[i];
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        resolve();
    }
}