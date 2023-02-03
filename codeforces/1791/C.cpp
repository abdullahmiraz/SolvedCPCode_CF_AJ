
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t; 
   while(t--){
      int n ;
      cin >> n;
      int cnt=0 ; 
      string s; 
      cin >> s;
      int i = 0, j = n-1;

      while(i<j){
         if(s[i] != s[j]){
            cnt+=2 ;
         }else{
            break ;
         }
         i++;
         j--;
      }
   cout << n-cnt << "\n" ;
   }
}