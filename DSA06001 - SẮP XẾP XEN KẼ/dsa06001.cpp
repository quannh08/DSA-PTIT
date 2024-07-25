#include<bits/stdc++.h>
using namespace std;
using ll =long long;
ll mod =123456789;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> vi(n);
		for(int i = 0 ; i<n; i++){
			cin >> vi[i];
		}
		sort(vi.begin(),vi.end());
		int i = 0,j = n-1;
		while(i<j){
			cout << vi[j] << " " <<vi[i]<<" ";
			j--;
			i++;
		}
		if(n%2 != 0)cout<<vi[i];
		cout<<endl;
	}
}