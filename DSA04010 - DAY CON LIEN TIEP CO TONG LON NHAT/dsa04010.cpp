#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void resolve(){
    int n;
    cin >> n;
    int a[n+5] = {0};
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int tmp=0,ans = 0;
    for(int i = 0 ; i < n ; i++){
        tmp += a[i];
        ans = max(ans,tmp);
        if(tmp<0)tmp=0;
    }
    cout << ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        resolve();
        cout << "\n";
    }
}