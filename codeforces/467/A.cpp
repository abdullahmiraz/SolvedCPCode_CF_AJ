#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n ;
    int cnt = 0;
    while(n--){
        int x,y ; 
        cin >>x >> y ;
        if(y-x>=2)cnt++ ;
    }
    cout << cnt << endl ;

    return 0 ;
}