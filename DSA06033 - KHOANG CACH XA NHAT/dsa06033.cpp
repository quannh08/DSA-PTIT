#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

bool cmp(pair<int,int> a,pair<int,int> b){
    return a.first<b.first;
}

void resolve(){
    int n;
    cin >> n;
    vector<int> v(n);
    vector<pair<int,int>> vp;
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
        vp.pb({v[i],i});
    }
    sort(vp.begin() , vp.end() , cmp);

    int res = -9999 , tmp = vp[0].second;
    for(int i = 1 ; i < n ; i++){
        if(vp[i].second-tmp > res){
            res = vp[i].second-tmp;     
        }
        tmp = min(tmp,vp[i].second);
    }
    cout << res <<"\n";

}

int main(){
    int t;
    cin >> t;
    while(t--){
        resolve();
    }
    return 0;
}