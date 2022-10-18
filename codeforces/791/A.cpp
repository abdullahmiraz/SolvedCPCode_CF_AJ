#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int lim, bob ;
    ll cnt = 0;
    cin >> lim >> bob ;
    while(lim<=bob){
        cnt++ ;
        lim*=3 ;
        bob*=2 ;
    }
    cout << cnt << endl ;

    return 0 ;
}