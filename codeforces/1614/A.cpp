#include <bits/stdc++.h>
using namespace std ;
using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--){
        ll n,l,r,k;
        cin >> n >> l >> r >> k ;
        vector<int> v;
        int sum = 0;
        int cnt = 0;
        for(int i = 0;i<n;i++){
            int x; cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(int j = 0;j<n;j++){
            if(v[j] >= l && v[j] <= r){
                sum+=v[j] ;
                if(sum>k)break ;
                cnt++ ;
            }
        }
        cout << cnt  << '\n' ;
    }


    return 0 ;
}