#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, h; cin >> n >> h ;
    int sum =n;
    for(int i =0;i<n;i++){
        int x; cin >> x; 
        if(x>h)sum++ ;
    }
    cout << sum << endl ;

    return 0 ;
}