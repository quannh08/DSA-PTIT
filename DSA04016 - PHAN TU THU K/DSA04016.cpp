#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int biSearch(vector<int> v,int k){
    int l=0,r=v.size()-1;
    while(l<=r){
        int m = (l+r)/2;
        if(v[m] > k){
            r = m-1;
        }
        else if(v[m] < k){
            l = m+1;
        }
        else return m;
    }
    return -1;
}

void resolve(){
    int m,n,k;
    cin >> m >> n >> k;
    vector<int> v(m+n);
    for(int i = 0 ; i < m+n ; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    cout << v[k-1]; 
}

int main(){
    int t;
    cin >> t;
    while(t--){
        resolve();
        cout<<"\n";
    }
}