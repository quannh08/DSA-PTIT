#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n;
    cin >> n;
    map<int,int> mp;
    int a[n+5];
    for(int i=0;i<n;i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    int x;
    cin >> x;
    mp[x] = 0;
    for(int i=0;i<n;i++){
        if(mp[a[i]])cout<<a[i]<<" ";
    }
}