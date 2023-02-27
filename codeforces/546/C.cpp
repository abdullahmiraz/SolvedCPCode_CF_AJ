/*
Code Author: Abdullah Miraz (matrix_) 
GitHub: https://github.com/abdullahmiraz/SolvedCPCode
Problem Link: https://codeforces.com/problemset/problem/546/C 
*/

#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    deque<int> dq1;
    deque<int> dq2; 
    int n; cin >> n;


    int a; cin >> a ;
    for(int i = 0;i<a;i++){
        int x; cin >> x;
        dq1.push_back(x);
    }

    int b; cin >> b ;
    for(int i = 0;i<b;i++){
        int x; cin >> x;
        dq2.push_back(x);
    }

    int cnt = 0;
    int x =1;
    while(1){
        if(dq1.empty()){
            x=2 ;
            break ;
        }
        if(dq2.empty()){
            x=1 ;
            break ;
        }
        if(dq1.front() > dq2.front()){
            dq1.push_back(dq2.front()) ;
            dq1.push_back(dq1.front()) ;
            dq1.pop_front();
            dq2.pop_front();
        }else{
            dq2.push_back(dq1.front()) ;
            dq2.push_back(dq2.front()) ; 
            dq2.pop_front();
            dq1.pop_front();
        }
        cnt++ ;
        if(cnt==10000){
            cout << -1 << endl ;
            return 0;
        }
    }

    cout << cnt<< ' ' << x << endl ;


    return 0 ;
}
