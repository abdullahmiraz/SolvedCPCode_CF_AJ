#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c ;
    cin >> a >> b >> c ;
    int r1, r2, r3, r4, r5 ;
    r1 = a+(b*c) ;
    r2 = a*(b+c) ;
    r3 = a*b*c ;
    r4 = a+b+c ;
    r5 = (a+b)*c ;
    
    int arr[5] = {r1, r2, r3, r4, r5} ;
    sort(arr, arr+5) ;
    cout << arr[4] ;


    return 0 ;
}