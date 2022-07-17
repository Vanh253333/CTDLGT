#include <bits/stdc++.h>
using namespace std;

int n, a[1000], tmp[1000];

void solve(){
	tmp[0] = a[0];
	int kq = a[0];
	for(int i = 0; i < n; i++){
		tmp[i] = a[i];
		for(int j = 0; j < i; j++){
			if(a[i] > a[j])
				tmp[i] = max(tmp[i], tmp[j] + a[i]);
		}
		kq = max(kq, tmp[i]);
	}
	cout << kq << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++)
			cin >> a[i];
		
		solve();
	}
	
	return 0;
}
