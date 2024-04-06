// I. Worms
// Codeforces - binary search
// https://codeforces.com/group/cyvgQdjAuu/contest/424337/problem/I
// 2024-04-06 10:40:26

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
    ll n, sum = 0, tmp, q; cin >> n;
    vector<ll> pfx(n+1);
    forn(i, 0, n){
    	cin >> tmp;
    	sum += tmp;
    	pfx[i+1] = sum;
    }
    // each(x, pfx) cout << x << ' '; cout << endl;
    cin >> q;
    while(q--){
    	cin >> tmp;
    	ll l = 0, r = n, m;
    	while(l+1<r){
    		m = (l+r)/2;
    		if (pfx[m] >= tmp) r = m;
    		else l = m;
    	}
    	cout << l+1 << '\n';
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