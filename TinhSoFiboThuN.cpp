#include<bits/stdc++.h>
using namespace std;
long long f[100];
int M = 1e9+7;

struct MaTran{
	long long f[2][2];
};

MaTran operator*(MaTran A, MaTran B){
	MaTran C;
	int i, j, k;
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			C.f[i][j] = 0;
			for(k = 0; k < 2; k++)
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
		int n;
		cin >> n;
		A.f[0][0] = 0;
		A.f[0][1] = 1;
		A.f[1][0] = 1;
		A.f[1][1] = 1;
		MaTran C = powMod(A, n-1);
		cout << C.f[1][1] << endl;
	}
	
	return 0;
}
