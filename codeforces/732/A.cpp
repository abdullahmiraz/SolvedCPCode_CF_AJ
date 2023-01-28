#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, r, c = 1;
    cin >> k >> r;
    ll a = k;
    while(1){
        if(a%10==0)break;
        else if((a-r)%10 == 0)break;
        a+=k ;
        c++ ;
    }
    cout << c << endl ;

    return 0 ;
}