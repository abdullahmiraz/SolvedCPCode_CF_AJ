#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, s2 ;
    cin >> s >> s2 ;
    reverse(s2.begin(), s2.end());
    if(s2== s){
        cout << "YES" <<'\n' ;
    }else{
        cout << "NO" <<  '\n' ;
    }

    return 0 ;
}