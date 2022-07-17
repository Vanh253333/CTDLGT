#include <bits/stdc++.h>
using namespace std;

int n, a[1005], f[1005] = {0}, tmp;

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++) cin >> a[i];
		
		f[0] = 1;
		for(int i = 1; i < n; i++){
			tmp = 0;
			for(int j = 0; j < i; j++){
				if(a[i] >= a[j])
					tmp = max(tmp, f[j]);
			}
			f[i] = tmp + 1;
		}
		sort(f, f+n);
		cout << n-f[n-1] << endl;
	}
	return 0;
}
