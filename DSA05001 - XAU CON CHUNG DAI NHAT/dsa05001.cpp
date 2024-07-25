#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MAX 1000000009

void resolve(){
    string a,b;
    cin >> a >> b;
    int n1 = a.length();
    int n2 = b.length();
    a =' '+a;
    b =' '+b;
    int c[n1+5][n2+5] = {0};

    for(int i=0;i<n2+1;i++){
        c[0][i]=0;
    }

    for(int i=0;i<n1+1;i++){
        c[i][0]=0;
    }

    for(int i = 1; i < a.length() ; i++){
        for(int j = 1 ; j < b.length() ; j++){
            if(a[i] == b[j]){
                c[i][j] = c[i-1][j-1]+1;
            }
            else{
                c[i][j] = max(c[i-1][j],c[i][j-1]);
            }
        }
    }

    cout << c[n1][n2];
}

int main(){
    int t;
    cin >> t;
    while(t--){
        resolve();
        cout << "\n";
    }
}