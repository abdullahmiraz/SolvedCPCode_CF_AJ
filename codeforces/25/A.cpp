#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ;cin >> n;
    int arr[n] ;
    int evcnt = 0, odcnt =0, evpos, odpos ;
    for(int i  =1;i<=n;i++){
        cin>>arr[i] ;
        if(arr[i] %2==0){
            evcnt++ ;
            evpos = i ;
        }else{
            odcnt++ ;
            odpos = i ;
        }
    }
    if(evcnt == 1){
        cout << evpos << endl ;
    }else if(odcnt = 1){
        cout << odpos << endl ;
    }
    

    return 0 ;
}