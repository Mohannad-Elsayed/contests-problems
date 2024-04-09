// B - T-primes
// Virtual Judge - Week#2
// https://vjudge.net/contest/538754#problem/B
// 2024-04-07 14:27:44

#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define each(a, x) for (auto &a : x)
#define ys cout << "YES";
#define ns cout << "NO";
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
#define forn(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define rofn(i,a,b) for(ll i=(ll)(a);i>(ll)(b);i--)
const ll MOD {1000000007};
si solve(){
    ll n; cin >> n;
    ld l = 0, r = 1e13, m;
    auto prime = [&](ll num){
    	if (num <2) return false;
    	for (ll i = 2; i*i<=num; ++i){
    		if (!(num%i)) return false;
    	}
    	return true;
    };
    int iters = 200;
    while(iters--){
    	m = (l+r)/2;
    	if (m*m<=n) l = m;
    	else r = m;
    }
    if (fabs(l-(ll)l) <= 1e-6 && prime((ll)l)) ys
    else ns
    // cout << l;
    return 0;
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