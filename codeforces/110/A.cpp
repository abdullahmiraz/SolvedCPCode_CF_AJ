#include <bits/stdc++.h>
using namespace std ;
using ll = unsigned long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin >> t ; 
    ll cnt = 0;
    while(t){
        ll temp = t%10;
        t/=10;
        if(temp==4 || temp==7){
            cnt++ ;
        }
    }
    string ans ="NO";
    while(cnt){
        ll temp = cnt%10;
        cnt/=10;
        if(temp==4 || temp==7){
            ans = "YES" ;
        }
    }
    cout << ans <<"\n" ;

    return 0 ;
}