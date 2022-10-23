#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, test = "hello" ;
    cin >> s ;
    int a= 0;
    for(auto i: s){
        if(i==test[a]){
            a++ ;
        }
    }
    if(a==5){
        cout << "YES" << endl ;
    }else{
        cout << "NO" << endl ;
        
    }

    return 0 ;
}