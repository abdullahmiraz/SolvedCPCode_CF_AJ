#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[i] == arr[j])
            {
        
                cnt++;break;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}