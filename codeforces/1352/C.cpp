/*
Code Author: Abdullah Miraz (matrix_) 
GitHub: https://github.com/abdullahmiraz/SolvedCPCode
Problem Link: https://codeforces.com/problemset/problem/1352/C 
*/
#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;

ll n;
ll search(ll l, ll r, ll k){
    if(l>r)return -1 ;

    ll mid = (l+r)/2 ;
    ll not_divisible = mid-mid/n ;

    if(not_divisible>k){
        return search( l, mid-1,k) ;
    }
    else if(not_divisible<k){
        return search(mid+1, r, k);
    }
    else{
        if(mid%n !=0)return mid ;
        return search(l, mid-1,k);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t ;cin >> t ;
    while(t--){
        ll k; cin >> n >> k  ;
        cout << search(1,2*k,k) << "\n" ;
    }


    return 0 ;
}
