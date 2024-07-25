#include<bits/stdc++.h>
using namespace std;

int a[1005];
int n,b[1005];
int used[1000000]={0};

void inkq(){
	for(int i=1;i<=n;i++){
		cout<<b[a[i]]<<" ";
	}
	cout<<"\n";
}

void Try(int i) {
	for (int j = 1; j <= n; j++) {
		if (used[j] == 0) {
			a[i] = j;
			used[j] = 1;
			if (i == n) {
				inkq();
			}
			else {
				Try(i + 1);
			}
			used[j] = 0;
		}
	}
}

int main(){
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> b[i];
	}
	sort(b,b+n+1);
	Try(1);
}