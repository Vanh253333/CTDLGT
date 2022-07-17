#include<bits/stdc++.h>
using namespace std;

int n, k, a[100];
bool ok[100];
vector< vector<int> > res;

void show(){
	for(int i = res.size()-1; i >= 0;  i--){
		for(int j = 0; j < res[i].size(); j++){
			cout << res[i][j];
		}
		cout << " ";
	}
	cout << endl;
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(!ok[j]){
			a[i] = j;
			ok[j] = true;
			if(i==n){
				vector<int> b;
				for(int l = 1; l <= n; l++)
					b.push_back(a[l]);
				res.push_back(b);
			}else{
				Try(i+1);
			}
			ok[j] = false;
		}
	}
}

int main(){
	int t;
	cin >> t; 
	while(t--){
		cin >> n;
		res.clear();
		memset(ok, false, sizeof(ok));
		Try(1);
		show();
	}
	return 0;
}
