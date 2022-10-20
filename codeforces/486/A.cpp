#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    long long n, a;
    cin >> n;
    if(n % 2 == 0)
     a = n / 2;
    else 
    a = ((n + 1) / 2) * (-1);
    cout<< a << endl;
}