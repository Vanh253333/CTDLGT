#include<bits/stdc++.h>
using namespace std;

int M = 1e9+7;

long long powMod(long long n, long long k){
	if(k==0){
		return 1;
	}
	long long x = powMod(n, k/2);
	if(k%2==0) return x*x%M;
	return n*(x*x%M)%M;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(n==0){
			break;
		}
		long long k = 0, m = n;
		while(m){
			k = 10*k+m%10;
			m/=10;
		}
		cout << powMod(n, k) << endl;
	}
	return 0;
}
