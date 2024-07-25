#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void resolve(){
    int n;
    cin >> n;
    map<int,int> mp;
    for(int x,i = 0 ; i < n ; i++){
        cin >> x;
        mp[x]++;
    }
    int res=-99999;
    int ans=0;
    for(auto x : mp){
        if(x.second > ans){
            res = x.first;
            ans = x.second;
        }
    }
    if(ans > n/2)cout << res;
    else cout << "NO";
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