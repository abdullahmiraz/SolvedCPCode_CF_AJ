#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n] ;
        for(int i=0;i<n;i++)cin >> arr[i] ;
        sort(arr, arr+n);
        int ans=n;
        for(int i=0;i<n/2;i++){
            if(arr[i] != arr[i+(n+1)/2])ans-=2;
        }
        cout << ans << endl ;
    }
}