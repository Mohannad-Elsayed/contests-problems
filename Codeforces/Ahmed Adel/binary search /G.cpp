// G. Sagheer and Nubian Market
// Codeforces - binary search
// https://codeforces.com/group/cyvgQdjAuu/contest/424337/problem/G
// 2024-04-06 14:38:05

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
	ll n, x; cin >> n >> x; int iii = 1;
	vector<pair<ll, ll>> v(n); each(e, v){ cin >> e.F; e.S = iii++;}
	ll l = 0, r = n, m, res = -1;
	auto chk = [&](ll k) -> bool {
		vector<ll> prices(n);
		forn(i, 0, n){
			prices[i] = (v[i].F+v[i].S*k);
		}
		sort(all(prices));
		ll summ = 0;
		forn(i, 0, k) summ += prices[i];
		return summ <= x; 
	};
	auto summa = [&](ll k) -> ll {
		vector<ll> prices(n);
		forn(i, 0, n){
			prices[i] = (v[i].F+v[i].S*k);
		}
		sort(all(prices));
		ll summ = 0;
		forn(i, 0, k) summ += prices[i];
		return summ; 
	};
	while(l<=r){
		m = (l+r)/2;
		// cout << "\n########### " << m << '\n';        //dbg
		if (chk(m)){
			res = max(res, m);
			l = m+1;
		} else r = m-1;
	}   
	cout << res << ' ' << summa(res);
    return 0;
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