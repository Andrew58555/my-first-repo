#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    int k;
    cin >> k;
    if (k % 2 == 0) {
        int f = 1;
        for (int i = 2; i <= k; i += 2) {
            f *= i;
        }
        cout << f;
        return 0;
    }
    int f = 1;
    for (int i = 1; i <= k; i += 2) {
        f *= i;
    }
    cout << f;
    return 0;
}
