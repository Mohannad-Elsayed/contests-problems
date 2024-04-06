// O. Books
// Codeforces - binary search
// https://codeforces.com/group/cyvgQdjAuu/contest/424337/problem/O
// 2024-04-05 16:12:02

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
    ll n, k; cin >> n >> k;
    ll arr[n]; each(x, arr) cin >> x;
    ll l = 0, r = n, m, res;
    auto ok = [&](ll mid) -> bool {
    	ll sum = 0;
    	forn(i, 0, mid) sum += arr[i];
    	if (sum <= k) return 1;
    	forn(i, mid, n){
    		sum -= arr[i-mid];
    		sum += arr[i];
    		if (sum <= k) return 1;
    	}
    	return 0;
    };
    while(l<=r){
    	m = (l+r)/2;
    	if (ok(m)){
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
    forn(i, 1, t+1){
    	// cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
    return 0;
}