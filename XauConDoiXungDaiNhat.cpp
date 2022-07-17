#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int flat, dem = 0, mx = 0, n = s.size();
		for(int i = 1; i < n; i++){
			flat = 0;
			for(int j = 0; j <= i; j++){
				flat = 0;
				if(s[j] ==s[i]){
					flat = 1;
					int l = j+1, r = i-1;
					while(l <= r){
						if(s[l] != s[r]) flat = 0;
						l++;r--;
					}
					if(flat){
						dem = i-j+1;
						mx = max(dem, mx);
					}
				}
			}
		}
		
		cout << mx << endl;
	}
	return 0;
}
