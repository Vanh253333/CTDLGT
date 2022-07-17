#include<bits/stdc++.h>
using namespace std;

int n, k, a[100];

bool check(int a[], int n, int k){
	int count = 0;
	for(int i = 1; i <= n; i++){
		if(a[i]==1) count++;
	}
	if(count == k)
		return true;
	return false;
}

void solve(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n){
			if(check(a, n, k)){
				for(int l = 1; l <= n; l++){
					cout << a[l];
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
		cin >> n >> k;
		solve(1);
	}
	return 0;
}

