#include<bits/stdc++.h>
using namespace std;

int n, a[100];

bool check(int a[], int n){
	if(a[1] == 1 && a[n] == 0)
		return true;
	return false;
}

bool check2(int a[], int n){
	for(int i=1; i<n; i++){
		if(a[i] == 1 && a[i] == a[i+1])
			return false;
	}
	return true;
}

void solve(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n){
			if(check(a, n) && check2(a, n)){
				for(int l = 1; l <= n; l++){
					if(a[l] == 0) cout << 'A';
					else cout << 'H';
				}
				cout << endl;
			}
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
	}
	return 0;
}

