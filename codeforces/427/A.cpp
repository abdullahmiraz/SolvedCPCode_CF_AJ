#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t ;
    int crime=0, recruit = 0;
    while(t--){
        int n ; cin >> n;
        if(n==-1)crime++ ;
        if(n>=1)recruit+=n ;

        if(recruit>=1 && n==-1){
            crime-- ;
            recruit-- ;
        }

    }
    cout << crime << endl ;


    return 0 ;
}