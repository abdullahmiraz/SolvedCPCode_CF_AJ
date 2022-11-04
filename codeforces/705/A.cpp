// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main(){
	string s1 = "I hate " ;
	string s2= "I love " ;
	int n ;cin >> n ;
	for(int i =1;i<=n;i++){
		if(i%2==0){
			cout << s2 ;
		}else{
			cout << s1 ;
		}
		if(i==n){
			cout << "it" ;
		}else{
			cout << "that " ;
		}
	}
}