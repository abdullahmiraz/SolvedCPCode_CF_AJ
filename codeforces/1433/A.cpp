#include <bits/stdc++.h>
using namespace std ;

using ll = long long  ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;
    vector<int> v2 ;
    v = {1,11, 111, 1111, 2, 22, 222, 2222, 3, 33, 333, 3333, 4, 44, 444, 4444, 5, 55, 555, 5555, 6, 66, 666, 6666, 7, 77, 777, 7777, 8, 88, 888, 8888, 9, 99, 999, 9999} ;
    v2 = {1,2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4} ;
    
    int t ;cin >> t ;
    while(t--){
        int item ;
        cin >> item ;
        int pos;
        vector<int>::iterator itr ;
        itr = find(v.begin(), v.end(), item) ; // finding the item
        if(itr !=v.end()){pos = itr-v.begin();} // store the index in a variable
        int sum = 0;
        for(int i =0;i<=pos ;i++){ // till that position sum the values count(digit count)
            sum+=v2[i] ;
        }
        cout << sum << endl ;
    }


    return 0 ;
}