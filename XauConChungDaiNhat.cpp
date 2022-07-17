#include<bits/stdc++.h>
using namespace std;

int f[1005][1005];
int solve(string s1, string s2){
	memset(f, 0, sizeof(f));
	int n = s1.length(), m = s2.length();
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(s1[i-1] == s2[j-1]) f[i][j] = f[i-1][j-1]+1;
			else
				f[i][j] = max(f[i-1][j], f[i][j-1]);
		}
	}
	return f[n][m];
}

int main(){
	int t;
	string s1, s2;
	cin >> t;
	while(t--){
		cin >> s1 >> s2;
		cout << solve(s1, s2) << endl;
	}
	return 0;
}
