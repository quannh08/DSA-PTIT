#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void resolve(){
    int n;
    cin >> n;
    vector<int> v(n+1);
    vector<ll> sum_v(n+1);
    sum_v[0] = 0;
    v[0] = 0;
    ll a = 0;
    for(int i = 1 ; i < n + 1 ; i++){
        cin >> v[i];
        sum_v[i] = sum_v[i-1] + v[i];
        a += v[i];
    }
    int res = -1;
    for(int i = 1 ; i < n + 1 ; i++){
        if(sum_v[i-1] == a-sum_v[i]){
            res = i;
            break;
        }
    }
    cout << res ; 
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