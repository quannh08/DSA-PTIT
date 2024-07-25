#include <bits/stdc++.h> 
using namespace std; 
  
void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx;  
    for (i = 0; i < n - 1; i++) {  
        min_idx = i; 
        for (j = i + 1; j < n; j++) { 
            if (arr[j] < arr[min_idx]) 
                min_idx = j; 
        } 
  
        if (min_idx != i) 
            swap(arr[min_idx], arr[i]); 
    } 
} 

void print(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) { 
        cout << arr[i] << " "; 
    } 
} 
  
int main() 
{ 
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0 ; i < n ; i++){
    		cin >> v[i];
		}
		int a[10],cnt[10] = {0};
		int count = 0;
		int b[10];
		for(int i = 0 ; i < n ; i++){
			while(v[i]){
				int tmp = v[i]%10;
				cnt[tmp]++;
				v[i] /= 10;
				if(cnt[tmp] == 1){
					b[count++] = tmp;
				}
			}
		}
		selectionSort(b,count);
		print(b,count);
		cout<<endl;
	}
} 