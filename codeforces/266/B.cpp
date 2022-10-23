#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, sec ;
    cin >> n >> sec ;
    int cnt=0;
    string s; cin >> s ;
    while(sec--){
        for(int i=1;i<=n;i++){
        if(s[i]=='G' && s[i-1]=='B'){
            swap(s[i], s[i-1]) ;
            cnt++ ;
            i+=1  ;
        }
    }
    
    }
    cout << s << endl ;

    return 0 ;
}