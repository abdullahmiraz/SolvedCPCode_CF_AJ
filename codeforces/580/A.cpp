#include <bits/stdc++.h>
using namespace std ;
#define ll long long  int
#define speed_of_light                    \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);

int main(){
    speed_of_light ;

    ll n ;
    cin >> n ;
    ll a[n] ;
    ll sum = 1;
    ll maxi = 1 ;
    cin >> a[0] ;
    for(int i =1;i<n;i++){
        cin >> a[i] ;
        if(a[i]>=a[i-1]){
            sum++ ;
            maxi = max(maxi, sum) ;
        }else{
            sum = 1 ;
        }
    }
    cout << maxi << endl ;

    


    return 0 ;
}