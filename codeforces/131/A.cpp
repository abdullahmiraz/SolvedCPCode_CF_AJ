#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s ;
    cin >> s ;
    // change if the first letter is lower || if all uppercase ;
    string s1=s, s2=s ;
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper) ;
    s1[0] = tolower(s[0]) ;
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper) ;
    if(s==s1 || s==s2){
        for(int i = 0;i<s.size();i++){
            if(islower(s[i])){
                s[i] = toupper(s[i]) ;
            }else if(isupper(s[i])){
                s[i] = tolower(s[i]) ;
            }
        }
    }
    cout << s << endl ;
}