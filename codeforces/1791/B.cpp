
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t ;
	while(t--){
		int n; cin >> n;
		string s; cin >> s;
		string res = "NO" ;
		int left=0, right = 0; // left = left+right; right = up+down; 
		for(int i = 0;i<n;i++){
			if(s[i] == 'L')left--;
			if(s[i] == 'R')left++;
			if(s[i] == 'U')right++;
			if(s[i] == 'D')right--;
			if(left == 1 && right ==1){res =  "YES"; break;}
		}
		cout << res <<"\n" ;
	}
}
