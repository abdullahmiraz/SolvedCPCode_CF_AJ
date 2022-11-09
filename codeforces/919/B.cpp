#include <bits/stdc++.h>
using namespace std ;
int main(){
    
    int tt ;cin >> tt ;
    int cnt =0;
    for(int i = 1;;i++){
        int test = i ;
        int prnt = i ;
        int ans = 0;
        while(test){
            int tmp = test%10 ;
            test/=10;
            ans += tmp ;
        }
        if(ans==10){
            cnt++ ;
            if(cnt==tt){
                cout << prnt << endl ;
                break ;
            }
        }
    }
}