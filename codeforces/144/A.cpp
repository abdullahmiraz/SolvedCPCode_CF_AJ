#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, max_pos, min_pos ;
    cin >> n;
    vector<int> vec;
    for(int i = 0;i<n; i++){
        int a; 
        cin >> a;
        vec.push_back(a) ;
    }
    int max = *(max_element(vec.begin(), vec.end())) ;
    int min = *(min_element(vec.begin(), vec.end())) ;

    for(int i = 0;i<n;i++){
        if(vec[i] == max){
            max_pos = i ;
            break ;
        }
    }
    int k = vec.size()-1 ;
    for(int j = k;j>=0; j--){
        if(vec[j] == min){
            min_pos = j;
            break ;
        }
    }

    if(max_pos>min_pos){
        cout << max_pos+(k-min_pos)-1 << endl ;
    }else if(min_pos >max_pos){
        cout << max_pos+(k-min_pos) << endl ;
    }


}