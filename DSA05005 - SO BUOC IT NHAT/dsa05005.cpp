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

    int res = 0;
    int F[n+5];
    for(int i = 0 ; i < n ; i++){
        F[i] = 1;
        for(int j = 0 ; j < i ; j++){
            if(v[i]>v[j]){
                F[i] = max(F[i],F[j]+1);
            }
        }
        res = max(res,F[i]);
    }
    cout << n - res << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        resolve();
    }
}