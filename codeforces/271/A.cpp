#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ; cin >> n ;
    for(int i =n+1;i<=9100;i++){
        string str = to_string(i);
        if(((str[0]!=str[1]) && (str[1] !=str[2])) && (str[2] != str[3]) && (str[0] !=str[2]) && str[0] != str[3]  && str[1] !=str[3]){
            cout << str << "\n" ;
            break;
        }
    }

    return 0 ;
}