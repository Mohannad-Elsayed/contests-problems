// G. Student Councils
// Codeforces - ITMO Academy: pilot course - Binary Search - Step 2
// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/G
// 2024-03-31 11:07:48

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
    ll k, n; cin >> k >> n;
	vector<ll> v(n);
    forn(i, 0, n)
    	cin >> v[i];
    // sort(all(v));
    ll l = 0, r = 1e14, m, res;
    auto ok = [&](ll m) -> bool {
    	ll sum = 0;
    	each(x, v) sum += min(x, m);
    	return sum >= (k*m);
    };
    while(l<=r){
    	m = l + (r-l)/2;
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