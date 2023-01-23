///********************** Bismillahir Rahmanir Rahim *****************///
#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
using namespace std;
// using namespace __gnu_pbds;

///************************** Area of MATRIX *************************///
/*


                                matrix_
                            rwe		e  	re
                        s 			l	3k
                        f		r	p	wv
                            m		y	t	l
                        g 	fq	q	t	i
                g	f	er	w	e
                        e	e	ri	v	;v	e
                  M_	  A_	T_	  R_	 I_ 	X_
                        3	g	yhe	g	ie	r
                        4	e	rw	h	cv	j
                    4	e	t	w	v	yh
                        g	m		.n	j	v
                    33	o		w		g
                        d	2	tq			rw
                    rg	fr 	td	f		
                            s3	jd	jf		er
                        eer

*/

///*********************** Template Start Here ***********************///
///************************ C o n t a i n e r ************************///
typedef long long ll;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<string> vs;
typedef set<int> si;
typedef map<int, int> mii;
typedef pair<int, int> pii;
// typedef tree< long long, null_type, less_equal<long long>, rb_tree_tag,tree_order_statistics_node_update > ordered_set;

///**************************** M a r c o ****************************///
#define f first
#define s second
#define endl '\n'
#define sp <<" "<<
#define pb push_back
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define fora(a) for(auto u:a)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define test int tc; cin>>tc; while(tc--)
#define forn(i,n) for(auto i=0; i<n; i++)
#define printm(a) {for(auto u:a) cout<<u.f sp u.s<<endl;}
#define printv(a) {for(auto u:a) cout<<u<<" "; cout<<endl;}
#define miraz() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
//#define lcm(a,b) lcm(ll a,ll b){return (a/(__gcd(a, b)))*b;}


///**************************** C o n s t ****************************///
const double eps = 1e-9;
const int inf = 2000000000;

///************************ Template End Here ************************///

int main()
{
    miraz();

    int n; cin >> n ;
    int sum = 0;
    while(n--){
        string s; cin >> s ;
        if(s=="Tetrahedron")sum+= 4;
        if(s=="Cube")sum+= 6;
        if(s=="Octahedron")sum+= 8;
        if(s=="Dodecahedron")sum+= 12;
        if(s=="Icosahedron")sum+= 20;
    }
    cout << sum << endl ;

}
