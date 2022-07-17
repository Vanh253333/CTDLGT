#include<bits/stdc++.h>
using namespace std;

int n, a[100];

void solve(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i==n){
			for(int l = 1; l <= n; l++){
				if(a[l] == 0) cout << 'A';
				else cout << 'B';
			}
			cout << " ";
		}else{
			solve(i+1);
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		solve(1);
		cout << endl;
	}
	return 0;
}
