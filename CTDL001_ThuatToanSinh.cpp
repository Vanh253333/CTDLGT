#include<bits/stdc++.h>
using namespace std;

int n;
int a[100];

bool thuanNghich(int a[], int n){
	for(int i = 1; i <= n/2; i++){
		if(a[i] != a[n-i+1])
			return false;
	}
	return true;
}

void solve(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i==n){
			if(thuanNghich(a, n)){
				for(int l = 1; l <= n; l++)
					cout << a[l] << " ";
				cout << endl;
			}
		}else{
			solve(i+1);
		}
	}
}

int main(){
	cin >> n;
	solve(1);
}

