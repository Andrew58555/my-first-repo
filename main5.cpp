#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= min(n, m); i++) {
        if (n % i == 0 && m % i == 0)
            cout << i << " ";
    }
    return 0;
}
