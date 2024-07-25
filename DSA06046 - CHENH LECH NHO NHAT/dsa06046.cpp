#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void resolve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }

    sort(v.begin(),v.end());
    int res = 99999;
    for(int i = 1 ; i < n ; i++){
        res = min(v[i]-v[i-1],res);
    }
    cout << res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        resolve();
        cout<<"\n";
    }
}