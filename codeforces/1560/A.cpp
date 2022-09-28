#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t ;
    cin >> t ;
    while(t--){
        ll arr[1000] ;
        ll cnt=0 ;
        for(int i = 1;cnt<=1000;i++){
            if(i%10==3 ||  i%3==0){
                continue ;
            }else{
                // cout << i << " " ;
                arr[cnt] = i ;
                cnt++ ;
            }
                
            
        }
        ll n ;
        cin >> n;
        cout << arr[n-1] <<"\n";
    }


    return 0 ;
}