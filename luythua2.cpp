#include <bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
long long spow(int x, long long y)
{
    long long res = 1; // Initialize result
    x = x % mod;

    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % mod;

        // y must be even now
        y = y / 1; // y = y/2
        x = (x * x) % mod;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
		long long k;
        cin >> n >> k;
        cout << spow(n, k) << endl;
    }
}
