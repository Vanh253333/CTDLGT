#include<bits/stdc++.h>
using namespace std;

int search(int a[], int n, int k){
	int x, l = 1, r = n;
	while(l <= r){
		x = (l+r)/2;
		if(a[x] == k)
			return x;
		if(k > a[x]) l = x+1;
		else r = x-1;
	}
	return -1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n+5];
		for(int i =1; i <= n; i++)
			cin >> a[i];
		int kq = search(a, n, k);
		if(kq == -1)
			cout << "NO" << endl;
		else
			cout << kq << endl;
	}
	return 0;
}

