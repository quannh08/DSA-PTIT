#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void resolve(){
    int n,k;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    ll cnt = 0;
    for(int i = 0 ; i < n-1 ; i++){
         cnt += lower_bound(v.begin()+i+1, v.end(), v[i]+k) - v.begin()-i-1;
    }
    cout << cnt ;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        resolve();
        cout << "\n";
    }
}