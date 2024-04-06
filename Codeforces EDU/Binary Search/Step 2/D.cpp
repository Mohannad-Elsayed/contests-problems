// D. Children Holiday
// Codeforces - ITMO Academy: pilot course - Binary Search - Step 2
// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/D
// 2024-03-30 13:16:53

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
#define dbg(x, y) cout << "(cnt): " << x << " (summ): " << y << endl;
typedef long long ll;
typedef long double ld;
typedef unsigned long long llu;
typedef short int si;
#define forn(i,a,b) for(llu i=(llu)(a);i<(llu)(b);i++)
#define rofn(i,a,b) for(llu i=(llu)(a);i>(llu)(b);i--)
const ll MOD {1000000007};
struct par {
	ll t, y, z;
};
typedef struct par par;
si solve(){
	ll m, n; cin >> m >> n;
	vector<par> v(n); vector<ll> vres(n);
	forn(i, 0, n) cin >> v[i].t >> v[i].y >> v[i].z;
	
    auto ok = [&](ll mid) -> bool {
    	ll indx = 0, summ = 0;
    	ll tmp = mid, cnt = 0;
    	each(x, vres) x = 0;
    	each(x, v){
    		tmp = mid; cnt = 0;
    		while (tmp > 0){
    			forn(i, 0, x.y){
    				tmp -= x.t;
    				if (tmp >= 0) cnt++;
    			}
    			tmp -= x.z;
    		}
    		summ += cnt;
    		if (summ <= m)
    		vres[indx++] = cnt;
    		
    		// cout << "mid : " << mid << '\n';
    		// dbg(cnt, summ) // vector emplace_back
    	}
    		    // each(x, vres) cout << x << ' '; cout << endl;
    	return summ >= m;
    };
    // ok (4); // time
    
    ll l = 0, r = 2e8, mid, res; vector<ll> vvres(n);
    while(l<=r){
    	mid = (l+r)/2;
    	if (ok(mid)){
    		res = mid;
    		r = mid-1;
    		vvres = vres;
    	} else l = mid+1;
    }
    cout << res << '\n';
    each(x, vvres) cout << x << ' ';
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