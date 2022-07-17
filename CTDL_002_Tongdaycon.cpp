#include<bits/stdc++.h>
using namespace std;

int n, k, a[100], v[100];
vector< vector<int> > res;

void Try(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n){
			int sum = 0;
			for(int l = 1; l <= n; l++){
				if(a[l]==1) sum += v[l];
			}
			if(sum==k){
				vector<int> tmp;
				for(int l = 1; l <= n; l++){
					if(a[l]==1) tmp.push_back(v[l]);
				}
				res.push_back(tmp);
			}
		}else
			Try(i+1);
	}
}

void show(){
	for(int i = 0; i < res.size(); i++){
		for(int j = 0; j < res[i].size(); j++){
			cout << res[i][j] << ' ';
		}		
		cout << endl;
	}		
	cout << res.size();
}

int main(){
	cin >> n >> k;
	res.clear();
	for(int i = 1; i <= n; i++){
		cin >> v[i];
	}
	Try(1);
	show();
	return 0;
}
