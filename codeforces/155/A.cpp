#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int mx, mn;
    int cnt = 0;
    int n;
    cin >> n;
    --t;
    mn = n;
    mx = n;
    while (t--)
    {
        cin >> n;
        if (n < mn)
        {
            mn = n;
            cnt++;
        }
        if (n > mx)
        {
            mx = n;
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}