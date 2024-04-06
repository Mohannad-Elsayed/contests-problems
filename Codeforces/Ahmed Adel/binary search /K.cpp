// K. Pair of Topics
// Codeforces - binary search
// https://codeforces.com/group/cyvgQdjAuu/contest/424337/problem/K
// 2024-04-06 13:46:14

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
typedef vector<pair<int, int>> vpi;
typedef pair<int, int> pi;
si solve(){
    int n, cnt = 0, tmp; cin >> n;
    vector<int> v(n);
    each(e, v) cin >> e;
    forn(i, 0, n){
    	cin >> tmp;
    	v[i] -= tmp;
    }
    sort(all(v));
    forn(i, 0, n){
    	int l = i+1, r = n-1, m, res = n;
    	while(l<=r){
    		m = (l+r)/2;
    		if (v[m]+v[i] > 0){
    			res = m;
    			r = m-1;
    		} else l = m+1;
    	}
    	// cout << res << ' ';
    	cnt += (n-res);
    }
    cout << cnt;
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