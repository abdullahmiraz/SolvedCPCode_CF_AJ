#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<string> st;
    int n; cin >> n;
    while(n--){
        string s; cin >> s ;
        int sz = st.size() ;
        st.insert(s);
        if(st.size() == sz){
            cout << "YES\n" ;
        }else{
            cout << "NO\n" ;
        }

    }

    return 0 ;
}