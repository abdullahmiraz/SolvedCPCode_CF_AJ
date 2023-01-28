#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t ;
    while(t--){
        vector<int> v;
        int n;
        cin >> n;
        int sz = (log10(n))+1 ;
        int x = 0;
        int multi ;
        int cnt = 0;
        for(int i =1;i<=sz;i++){
            multi = floor(pow(10,x++)+.5);
            int temp = n%10;
            if(temp!=0){
            v.push_back(temp*multi);
                cnt++ ;
            }
            n/=10;
        }
        cout << cnt << endl;
        for(auto x: v){
            cout << x << " " ;
        }
        cout << endl;
        
    }

    return 0;
}