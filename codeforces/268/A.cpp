#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, sum = 0;
    cin >> n ;
    int a[n], b[n] ;
    for(int i =0;i<n;i++){
        cin >> a[i] >> b[i] ;
    }

    for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            if(a[i] == b[j]){
                ++sum ;
            }
        }
    }

    cout << sum << "\n" ;
    return 0 ;
}