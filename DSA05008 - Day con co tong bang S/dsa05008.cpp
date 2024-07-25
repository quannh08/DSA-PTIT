#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void resolve(){
    int n,s;
    cin >> n >> s;
    vector<int> vi(n);
    for(int i = 0 ; i < n ; i++){
        cin >> vi[i];
    }
    int res[s+5] = {0};
    res[0] = 1;
    for (int i = 0 ; i < n ; i++){
        for(int j = s ; j >= vi[i] ; j--){
            if(res[j]==0 && res[j-vi[i]]==1){
                res[j] = 1;
            }
        }
    }
    if (res[s])cout<<"YES\n";
    else cout << "NO\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        resolve();
    }
}