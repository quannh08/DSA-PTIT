#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n), l(n,-1), r(n,-1);
		stack<int> sr,sl;
		
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		
		for(int i=0;i<n;i++){
			while(sl.size() && a[i]>a[sl.top()]){
				l[sl.top()]=i;
				sl.pop();
			}
			sl.push(i);
		}
		
		for(int i=0;i<n;i++){
			while(sr.size() && a[i]<a[sr.top()]){
				r[sr.top()]=i;
				sr.pop();
			}
			sr.push(i);
		}
		
		for(int i=0;i<n;i++){
			if(l[i]==-1 || r[l[i]]==-1){
				cout<<-1<<" ";
			}
			else cout<<a[r[l[i]]]<<" ";
		}
		cout<<"\n";
	}
}