#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k ; cin >> n >> k ;
    int m = 1;
    int cnt = -1;
    while(k<=240){
        // cout << k << endl ;
        k+=5*m;
        m++;
        cnt++;
        if(cnt==n)break;
    }
    cout << cnt << endl ;

    return 0 ;
}