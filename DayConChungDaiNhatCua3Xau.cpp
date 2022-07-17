#include<bits/stdc++.h>
using namespace std;

int f[105][105][105];
		string s1, s2, s3;
		int m, n, l;

int solve(){
	memset(f, 0, sizeof(f));

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			for(int k = 1; k <= l; k++){
				if(s1[i-1] == s2[j-1] && s2[j-1]==s3[k-1])
					f[i][j][k] = f[i-1][j-1][k-1] + 1;
				else
					f[i][j][k] = max(f[i-1][j][k], max(f[i][j-1][k], f[i][j][k-1]));
			}
		}
	}
	return f[n][m][l];
}

int main(){
	int t;
	cin >> t;
	while(t--){
 
		cin >> n >> m >> l >> s1 >> s2 >> s3;
		cout << solve() << endl;
	}
	return 0;
}
