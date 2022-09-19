#include <bits/stdc++.h>
using namespace std;

int a[100013] ;
void solve(){
    long long n, mx = 0;
    cin >>n ;
    for(int i=1;i<=n;i++)cin >> a[i] ;
    for(int i=2 ; i<=n;i++){
        mx = max(mx, (long long)(max((a[i]), (a[i-1])))*min((a[i]), (a[i-1]))) ;
    }
    cout << mx << "\n" ;
}

signed main(){
    int t ;
    cin >> t ;
    while(t--){
        solve() ;
    }
}