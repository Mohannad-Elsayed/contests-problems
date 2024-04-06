// D. Zular Eclipse
// Codeforces - binary search
// https://codeforces.com/group/cyvgQdjAuu/contest/424337/problem/D
// 2024-04-05 15:19:01

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
    ll n, q, tmp, sum = 0; cin >> n; 
    vector<ll> v(n), pfx(n);
    forn(i, 0, n) cin >> v[i];
    sort(all(v));
    forn(i, 0, n){
    	sum += v[i];
    	pfx[i] = sum;
    }
    v.emplace_back(INT_MAX);
    v.insert(v.begin(), 0);
    // each(x, v) cout << x << ' '; cout << '\n';
    cin >> q; 
    while(q--){
    	cin >> tmp;
    	ll l = 0, r = n+1, m;
    	while(l+1<r){
    		m = (l+r)/2;
    		if (v[m] <= tmp) l = m;
    		else r = m;
    	}
    	// cout << l << '\n';
    	if (l) cout << l << ' ' << pfx[l-1];
    	else cout << -1;
    	cout << '\n';
    }
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