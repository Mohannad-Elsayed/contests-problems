// D. Product of Binary Decimals
// Codeforces - Codeforces Round 937 (Div. 4)
// https://codeforces.com/contest/1950/problem/D
// 2024-03-28 17:10:25

#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define each(a, x) for (auto &a : x)
#define ys cout << "YES"
#define ns cout << iostream"NO";
#define F first
#define S second
#define pb emplace_back
#define pf emplace_front
#define lwb lower_bound
#define upb upper_bound
typedef long long ll;
typedef long double ld;
typedef unsigned long long llu;
typedef short int si;
#define forn(i,a,b) for(llu i=(llu)(a);i<(llu)(b);i++)
#define rofn(i,a,b) for(llu i=(llu)(a);i>(llu)(b);i--)
const ll MOD {1000000007};
map< int64_t,int64_t > p(int64_t n){
    if( n <= 1 )
    {
        return ( map< int64_t , int64_t > {} );
    }
    map< int64_t,int64_t > primeFactor;
 
    while( !(n % 2 ) )
        primeFactor[2]++, n /= 2;
 
    while( !(n % 3 ) )
        primeFactor[3]++, n /= 3;
 
    for (int64_t i = 5; i * i <= n; i += 6) {
 
        while( !( n % i ) )
        {
            primeFactor[ i ] ++;
            n /= i;
        }
        while( !( n % (i + 2) ) ){
            primeFactor[ i + 2 ] ++;
            n /= (i + 2);
        }
 
    }
    if( n > 1 )
    {
        primeFactor[n] = 1;
    }
    return primeFactor;
}

si solve(){
    int n; cin >> n;
    string s = to_string(n);
    bool f = true;
    each(x, s){
    	if (x != '1' && x != '0'){
    		f = 0;
    		break;
    	}
    }
    if (f) return (ys), 0;
    auto chk = [&](int n) -> bool {
    	string s = to_string(n);
	    each(x, s){
	    	if (x != '1' && x != '0'){
	    		return 0;
	    	}
	    }
	    return 1;
    };
    map< int64_t,int64_t > mp = p(n);
    ll res = 1, iters = 20;
    while(iters--){
	    each(x, mp){
	    	if (!chk(x.F)){
	    		// cout << x.F << "here\n";
	    		if (x.S){
		    		res*=x.F;
		    		x.S--;	
	    		}
	    		if (chk(res)) res = 1;
	    	}
	    }
    }
    cout << (chk(res) ? "YES" : "NO");
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int32_t t = 1;
    cin >> t;
    forn(i, 1, t+1){
    	// cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
    return 0;
}