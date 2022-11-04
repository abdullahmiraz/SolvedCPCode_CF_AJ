#include <bits/stdc++.h>
using namespace std;
int arr[101] ;
int main() {
	int lvl ;
	cin >> lvl ;

	set<int> s ;

	int x; cin >> x;
	for(int i = 1;i<=x;i++){
		int p; cin >> p ;
		s.insert(p) ;
	}
	int y  ;
	cin >> y ;
	// cout << lvl << x << y << endl ;
	for(int i = 1;i<=y;i++){
		int p; cin >> p ;
		s.insert(p) ;
	}
	

	// cout << *s.end() << endl; 
	if((*s.end()>=lvl)){
		cout << "I become the guy.\n" ;
	}else{
		cout << "Oh, my keyboard!\n" ;
	}


}