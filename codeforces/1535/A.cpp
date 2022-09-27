#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t ;
    while(t--){
        int arr[4];
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
        int max1, max2 ;
        max1 = max(arr[0],arr[1]);
        max2 = max(arr[2],arr[3]);
        if(max1>max2)swap(max1, max2);

        sort(arr, arr+4);
        
        if(arr[2]==max1 && arr[3] == max2){
            cout << "YES" << "\n" ;
        }else{
            cout << "NO" << "\n" ;
        }
    }
    


    return 0 ;
}