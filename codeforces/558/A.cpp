/*
Code Author: Abdullah Miraz (matrix_) 
GitHub: https://github.com/abdullahmiraz/SolvedCPCode
Problem Link: https://codeforces.com/problemset/problem/558/A
*/

#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, left=0, right=0, ans = 0 ;
    cin >> n;

    int a, b;
    pair<int, int> p[1000] ;
    for(int i = 0;i<n;i++){
        cin >> a >> b;
        p[i] = make_pair(a,b);
        if(a<0)left++ ;
        else right++ ;
    }
    sort(p, p+n);
    for(int i = max(0, left-right-1); i<=min(n, left*2); i++){
        ans+= p[i].second ;
    }
    cout << ans ;


    return 0 ;
}
