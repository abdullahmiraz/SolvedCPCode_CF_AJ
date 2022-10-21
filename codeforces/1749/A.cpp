#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, n, m;
    cin >> t;
    while (t--)
    {
        
        cin >> n >> m;
        for (int i = 0; i < m; ++i)
        {
            cin >> a >> b;
        }
        cout << (n == m ? "NO\n" : "YES\n");
    }
    return 0;
}