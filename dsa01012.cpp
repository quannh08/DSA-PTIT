#include <bits/stdc++.h>
using namespace std;
#define pb push_back


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n;
       cin >> n;
       vector<string> res1;
       vector<string> res2;
       res1.pb("0");res1.pb("1");
       res2.pb("1");res2.pb("0");
       int cnt=1;
       while(cnt!=n){
       		for(int i=0;i<res1.size();i++) res1[i]="0"+res1[i];
       		for(int i=0;i<res2.size();i++) res2[i]="1"+res2[i];
       		for(int i=0;i<res2.size();i++){
       			res1.pb(res2[i]);	
			}
			res2.clear();
			for(int i=res1.size()-1;i>=0;i--){
				res2.pb(res1[i]);
			}
			cnt++;
	   }
	   for(auto x: res1) cout<<x<<" ";
	   cout<<"\n";
    }
}