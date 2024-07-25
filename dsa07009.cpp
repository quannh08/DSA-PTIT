#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define MAX 100005

string cal = "+-*/";

void resolve(){
    string s;
    cin >> s;
    stack<string> st;
    int n = s.length();
    for(int i=n-1 ; i >= 0 ; i--){
        if(cal.find(s[i]) == string::npos){
            string tmp ="";
            tmp+=s[i];
            st.push(tmp);
        }
        else{
            string tmp = "(";
            tmp =tmp+st.top()+s[i];
            st.pop();
            tmp+=st.top()+")";
            st.pop();
            st.push(tmp);
        }
    }
    cout << st.top()<<"\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        resolve();
    }
}