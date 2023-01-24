#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b; cin >> a >> b;
    int res = min(a,b);
    int res2 = (max(a,b)-res)/2 ;
    cout << res << " " << res2 << endl ;;


    return 0 ;
}