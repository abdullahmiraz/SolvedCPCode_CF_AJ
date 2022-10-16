#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int freq[27] ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;
    string l = "0abcdefghijklmnopqrstuvwxyz" ;

    for(int i =0;i<s.size();i++){
        freq[s[i]-'0'-48]++ ;
    }
    int cnt = 0;
    for(int i =1;i<27;i++){
        if(freq[i]>0)cnt++ ;
    }
    if(cnt%2==0)cout << "CHAT WITH HER!" << '\n' ;
    else cout << "IGNORE HIM!" << "\n" ;



    return 0 ;
}