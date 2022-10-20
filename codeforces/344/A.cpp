#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ; cin >> n ;
    int cnt = 1;
    int arr[n] ;
    for(int i = 0;i<n;i++){
        cin >> arr[i] ;
    }
    for(int i = 1;i<n;i++){
        if(arr[i-1]!=arr[i])cnt++ ;
    }
    cout << cnt << endl ;


    return 0 ;
}