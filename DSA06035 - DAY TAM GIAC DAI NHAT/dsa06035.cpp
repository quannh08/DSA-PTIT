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

    vector<int> tang(n),giam(n);
    tang[0] = giam[n-1] = 1;
    for(int i=1;i<n;i++){
        if(v[i]>v[i-1])
            tang[i]=tang[i-1]+1;
        else tang[i]=1;
    }

    for(int i=n-2;i>=0;i--){
        if(v[i]>v[i+1])giam[i]=giam[i+1]+1;
        else giam[i]=1;
    }
    int res=-1;
    for(int i=0;i<n;i++){
        res = max(res,tang[i]+giam[i]-1);
    }
    cout<<res<<"\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        resolve();
    }
}