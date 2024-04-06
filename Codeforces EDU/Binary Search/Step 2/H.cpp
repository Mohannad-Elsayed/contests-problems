// H. Hamburgers
// Codeforces - ITMO Academy: pilot course - Binary Search - Step 2
// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/H
// 2024-04-01 13:28:45

#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define each(a, x) for (auto &a : x)
#define ys cout << "YES";
#define ns cout << "NO";
#define F first
#define S second
#define pf emplace_front
#define lwb lower_bound
#define upb upper_bound
typedef long long ll;
typedef long double ld;
typedef unsigned long long llu;
typedef short int si;
#define forn(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define rofn(i,a,b) for(ll i=(ll)(a);i>(ll)(b);i--)
const ll MOD {1000000007};
struct one{
	ll b, s, c;
};
typedef struct one ing; // for ingredients
si solve(){
    string s; cin >> s;
    ing have, price, need; ll money;
    cin >> have.b >> have.s >> have.c >> price.b >> price.s >> price.c >> money;
    
    // count needed ingredients
    need.b = count(all(s), 'B'); 
    need.s = count(all(s), 'S');
    need.c = count(all(s), 'C');
    
	auto f = [&](ll m) -> bool{
		ing buy;
		buy.b = m * need.b - have.b;
		buy.s = m * need.s - have.s;
		buy.c = m * need.c - have.c;
		if (buy.b <0) buy.b = 0;
		if (buy.s <0) buy.s = 0;
		if (buy.c <0) buy.c = 0;
		return (buy.b*price.b+buy.s*price.s+buy.c*price.c) <= money;
	};
	ll l = 0, r = 1e14, m, res;
	while (l<=r){
		m = (l+r)/2;
		if (f(m)){
			res = m;
			l = m+1;
		} else r = m-1;
	}
	cout << res;
    return 0;
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int32_t t = 1;
    // cin >> t;
    // cout << bool(0);
    forn(i, 1, t+1){
    	// cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
    return 0;
}