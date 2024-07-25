#include<bits/stdc++.h>
using namespace std;
#define ll long long

void resolve(){
    string s;
    cin >> s;
    int cnt = 0;
    stack<char> stk;
    for(int i=0;i<s.length();i++){
        if(!stk.empty() && stk.top()=='('){
            if (s[i]==')'){
                stk.pop();
            }
            else stk.push(s[i]);
        }
        else stk.push(s[i]);
    }
    int x=stk.size();
    while(!stk.empty()&&stk.top()=='('){
        cnt++;
        stk.pop();
    }
    cout << x/2 + cnt%2 << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        resolve();
    }
}