#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    int sum = 0;
    int pr = 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            sum += i;
        else
            pr *= i;
    }
    cout << sum << " " << pr;
    return 0;
}
