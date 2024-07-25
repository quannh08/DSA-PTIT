#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


int main(){
    int n;
    cin >> n;

    vector<int> a,b;
    for(int x,i = 0 ; i < n ; i++){
        cin >> x;
        if(i%2 == 0)a.pb(x);
        else b.pb(x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<int>());

    int idx1 = 0,idx2 = 0;
    for(int i = 0 ; i < n ; i++){
        if(i%2 == 0)cout << a[idx1++]<<" ";
        else cout << b[idx2++]<<" ";
    }
}