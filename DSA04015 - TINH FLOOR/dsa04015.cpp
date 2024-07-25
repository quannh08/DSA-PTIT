#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void resolve(){
    int n,x;
    cin >> n >> x;

    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }

    int res=upper_bound(v.begin(),v.end(),x) - v.begin() - 1;
    if(res == -1) cout << res;
    else cout << res + 1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        resolve();
        cout << "\n";
    }
}