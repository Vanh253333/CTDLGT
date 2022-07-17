#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int a[n+3];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	
	int i = n-1;
	while(i >= 0 && a[i] > a[i+1]) i-=1;
	if(i < 0){
		for(int j = 1; j <= n; j++){
			cout << j << ' ';
		}
		cout << endl;
	}else{
		int k = n;
		while(a[k] < a[i]) k--;
		swap(a[k], a[i]);
		int l = i+1, r = n;
		while(l<r){
			swap(a[l], a[r]);
			l++; r--;
		}
		for(int j = 1; j <= n; j++){
			cout << a[j] << ' ';
		}
		cout << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	
	return 0;
}
