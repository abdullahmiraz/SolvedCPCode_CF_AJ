#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long ;
int main(){
    ll n , sum=0;
    cin >> n ;
    ll arr[n-1] ;
    for(ll i = 0;i<n-1;i++){
        cin >> arr[i] ;
        sum+= arr[i] ;
    }
    cout << ((n*(n+1))/2)-sum << endl;
}