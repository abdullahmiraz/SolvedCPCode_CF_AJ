#include"bits/stdc++.h"

using namespace std; 
typedef long long ll; 
void solve() {
    int n; cin >> n; 
    string s; cin >> s; 
    string x = "meow";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    s.erase(unique(s.begin(), s.end()), s.end());
    if(x == s) {
        cout << "YES\n";
    }
    else cout << "NO\n";
}
int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL); cout.tie(NULL);

    int t = 1; 
    cin >> t; 
    for(int i =  1; i <= t; i++) {
    
        solve();
    }

    return 0; 
}    