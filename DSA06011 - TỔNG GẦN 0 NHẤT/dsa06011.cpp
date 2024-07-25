#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(int a,int b){
	return abs(a)<abs(b);
}

void resolve(){
	int n, s = 999999999;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (abs(a[i] + a[j]) < abs(s))
				s = a[i] + a[j];
		}
	}
	cout << s<<"\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}