#include <bits/stdc++.h>
using namespace std ;

int main(){
    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // main code
    string s;
    cin >> s ;
    sort(s.begin(), s.end()) ;
    (s[0] == s[1] && s[2]==s[3] && s[1] != s[2])? cout <<  "Yes": cout << "No" ;
}