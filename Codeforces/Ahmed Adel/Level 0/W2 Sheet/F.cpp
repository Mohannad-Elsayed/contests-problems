// F. Towers Upgrade
// Codeforces - Week 2 Sheet
// https://codeforces.com/group/42BcTs2lav/contest/404038/problem/F
// 2024-03-25 16:16:02

#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define each(a, x) for (auto &a : x)
#define ys cout << "YES";
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
ll pmod(ll x, ll ex){
	if (ex==0) return 1;
	ll res = x;
	while(--ex){
		res%=MOD;
		res *= x;
	}
	return (res%MOD);
}
si solve(){
    ll a, b, c; cin >> a >> b >> c;
    multiset<ll> ste;
    ste.insert(pmod(a, b));
    ste.insert(pmod(b, a));
    ste.insert(pmod(c, abs(a-b)));
    each(x, ste) cout << x << ' ';
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int32_t t = 1;
    // cin >> t;
    forn(i, 1, t+1){
    	// cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
    return 0;
}