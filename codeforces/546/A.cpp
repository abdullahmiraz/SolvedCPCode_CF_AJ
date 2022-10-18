#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll k, n, w; 
    cin >> k >> n >> w ;
    ll sum = 0 ;
    for(int i =1;i<=w;i++){
        sum+= k*i ;
    }
    if(sum>=n){
        cout << sum-n << "\n" ;
    }else{
        cout << 0 << "\n" ;
    }
    

    return 0 ;
}