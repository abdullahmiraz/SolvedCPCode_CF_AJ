#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2, s3 ;
    cin >> s1 >> s2 >> s3 ;
    string s4 = s1+s2 ;
    sort(s4.begin(), s4.end()) ;
    sort(s3.begin(), s3.end()) ;
    if(s4==s3)cout << "YES\n" ;
    else cout << "NO\n" ;

    return 0 ;
}