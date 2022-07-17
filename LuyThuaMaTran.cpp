#include<bits/stdc++.h>
using namespace std;
long long f[100];
int M = 1e9+7;
long long n, k;
struct MaTran{
	long long f[10][10];
};

MaTran operator*(MaTran A, MaTran B){
	MaTran C;
	int i, j, k;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			C.f[i][j] = 0;
			for(k = 0; k < n; k++)
				C.f[i][j] = (C.f[i][j] + A.f[i][k]*B.f[k][j]%M)%M;
		}
	}
	return C;
}

MaTran powMod(MaTran A, int n){
	if(n==1) return A;
	MaTran X = powMod(A, n/2);
	if(n%2==0) return X*X;
	return A*X*X;
}



int main(){
	int t;
	cin >> t;
	MaTran A;
	while(t--){
		
		cin >> n >> k;
		for(long long i = 0; i < n; i++){
			for(long long j = 0; j < n; j++)
				cin >> A.f[i][j];
		}
		MaTran C = powMod(A, k);
		
		long long sum = 0;
		for(long long i = 0; i < n; i++){
			sum += C.f[n-1][i];
			
		}
		sum%=M;
		cout << sum << endl;
	}
	
	return 0;
}
