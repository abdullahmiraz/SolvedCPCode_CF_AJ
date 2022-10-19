#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int mx = -1e9, x, y;
    int total = 0;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        total -= a;
        total += b;
        mx = max(mx, total);
    }
    cout << mx << endl;
    return 0;
}