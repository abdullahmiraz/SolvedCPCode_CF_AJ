#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[4] ; cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] ;
    sort(arr, arr+4);
    cout << arr[3]-arr[0] << " " << arr[3]-arr[1] << " " << arr[3]-arr[2] << endl;


    return 0 ;
}