#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define pf push_front
#define popb pop_back
#define popf pop_front
#define all(a) a.begin(), a.end()
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep2(i, n, m) for (ll i = n; i <= m; i++)
#define rep3(i, n, m) for (ll i = n; i >= m; i--)
#define rep4(i, n, m) for (ll i = n; i < m; i++)
#define rep5(i, n, m) for (ll i = n - 1; i >= m; i--)
#define ii pair<int, int>
#define vll vector<long long>
#define mp make_pair

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, s, r;
        cin >> n >> s >> r;
        int arr[n];
        int maxi = s - r;
        arr[n - 1] = maxi;
        int res = r / (n - 1);
        ll sum = 0;

        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = res;
            sum += arr[i];
        }
        sum -= r;

        for (int i = 0; i < n - 1 && sum < 0; i++)
        {
            while (arr[i] < maxi && sum < 0)
            {
                arr[i]++;
                sum++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
