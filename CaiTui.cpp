#include <bits/stdc++.h>
using namespace std;

int n, v;

struct dat{
	int w = 0, v = 0;
};

dat a[1005];
int dp[1005][1005];
int res = 0;

void solve(){
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= v; j++){
			if(j < a[i].w)
				dp[i][j] = dp[i-1][j];
			else
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-a[i].w] + a[i].v);
			res = max(res, dp[i][j]);
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> v;
		for(int i = 1; i <= n; i++) cin >> a[i].w;
		for(int i = 1; i <= n; i++) cin >> a[i].v;
		solve();
		cout << res << endl;
		

	}
	return 0;
}
