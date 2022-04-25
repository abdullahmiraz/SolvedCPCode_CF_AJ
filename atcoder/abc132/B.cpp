#include <bits/stdc++.h>
using namespace std ;
int main(){
    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // main code
    int n, count=0 ;
    cin >> n ;
    int arr[n] ;
    // input loop
    for(int i = 0 ;i<n ;i++){
        cin >> arr[i] ;
    }
    // check condition
    for(int i = 1 ;i<n-1 ;i++){
        if(((arr[i]>arr[i-1]) && (arr[i] < arr[i+1])) || ((arr[i]<arr[i-1]) && (arr[i] > arr[i+1]))){
            //cout << arr[i] << " " ;
            count++ ;
        }
    }

    cout << count << "\n"  ;

    return 0 ;
}
