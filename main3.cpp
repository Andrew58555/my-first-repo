#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    int k = 0;
    for (int i = 1; i <= n; i++) {
        k += pow(i, i);
    }
    cout << k;
    return 0;
}
