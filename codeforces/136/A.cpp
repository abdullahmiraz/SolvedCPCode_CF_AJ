#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i = 1;i<=n;i++){
        int x; cin >> x;
        arr[x] = i ;
    }
    for(int i =1;i<=n;i++){
        cout << arr[i] << " " ;
    }


    return 0 ;
}