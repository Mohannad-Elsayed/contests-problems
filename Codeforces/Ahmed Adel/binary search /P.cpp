// P. Maximum Median
// Codeforces - binary search
// https://codeforces.com/group/cyvgQdjAuu/contest/424337/problem/P
// 2024-04-06 11:02:00

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
typedef vector<ll> vll;
typedef vector<int> vi;
#define forn(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define rofn(i,a,b) for(ll i=(ll)(a);i>(ll)(b);i--)
const ll MOD {1000000007};
si solve(){
    ll n, k; cin >> n >> k; ll med = n/2; 
    vll v(n); each(e, v) cin >> e;
    sort(all(v));
    // ll mid = v[med];
    ll l = v[med], r = 1e10, m, sum, res;
    // each(x, v) cout << x << ' '; cout << '\n';
    while(l<=r){
    	sum = 0;
    	m = (l+r)/2;
    	rofn(i, n-1, med-1){
    		sum += max(0ll, m - v[i]);
    	}
    	if (sum <= k){
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