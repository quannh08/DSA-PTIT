#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void resolve(){
    string a,b;
    cin >> a >> b;
    a=" "+a;
    b=" "+b;
    int n1=a.length();
    int n2=b.length();
    int c[n1+5][n2+5];
    for(int i=0;i<n1+5;i++){
        for(int j=0;j<n2+5;j++){
            c[i][j]=0;
        }
    }

    for(int i=1;i<a.length();i++){
        for(int j=1;j<b.length();j++){
            if(a[i]==b[j]){
                c[i][j]=c[i-1][j-1]+1;
            }
            else{
                c[i][j]=max(c[i-1][j],c[i][j-1]);
            }
        }
    }
    cout<< c[n1-1][n2-1]<<"\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        resolve();
    }
}