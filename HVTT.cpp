#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, test;
	string s;
	cin >> t;
	for(int i = 1; i <= t; i++){
		cin >> test >> s;
		cout << test << ' ';
		int a[100], n;
		for(int j = 1; j <= s.size(); j++	)
			a[j] = int(s[j-1]-'0');
		n = s.size()-1;
		while(n > 0 &&a[n] >= a[n+1]) n-=1;
		if(n <= 0) cout << "BIGGEST" << endl;
		else{
			int k = s.size();
			while(a[k] <= a[n]) k -= 1;
			swap(a[k], a[n]);
			int l = n+1, r = s.size();
			while(l < r){
				swap(a[l], a[r]);
				l++; r--;
			}
			for(int j = 1; j <= s.size(); j++)
				cout <<a[j];
			cout << endl;
		}
	}
}
