#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a = ceil(double(double(n) / 2));
        if (n % 2 == 0)
            cout << (n / 2) - 1 << endl;
        else
        {

            ll b = floor(double(double(n) / 2));
            cout << b << endl;
        }
        // cout << "a: " << a << " b: " << b << endl ;
    }

    return 0;
}