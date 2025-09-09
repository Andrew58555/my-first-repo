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
//если n == 5, то ответ будет 3413
//если n == 6, то ответ будет 50069
//если n == 10, то ответ будет 10405071317
//если n > 15, то ответ будет будет выходить за границы типа данных и выводить космический мусор
