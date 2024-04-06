// A. Get together
// Codeforces - ITMO Academy: pilot course - Binary Search - Step 3
// https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/A
// 2024-04-05 10:39:53

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
struct person{
	ll x, v;
};
typedef struct person person;
si solve(){
	cout << fixed << setprecision(10);
    int n; cin >> n;
    vector<person> arr(n);
    forn(i, 0, n) cin >> arr[i].x >> arr[i].v;
    int iters = 100;
    ld l = 0, r = 1e10, m;
    auto ok = [&](ld mid) {
    	ld xl = INT_MIN, xr = INT_MAX;
    	forn(i, 0, n){
    		xl = max(xl, (arr[i].x-mid*arr[i].v));
    		xr = min(xr, (mid*arr[i].v+arr[i].x));
    		
    		// cout << endl << arr[i].x << ' ' << arr[i].v << ' ' << mid << '\n' << 
    			// xl << "  |  " << xr << endl;
    	}
    	return xl <= xr;
    };
    while(iters--) {
    	// cout << "# " << 100-iters << '\n';
    	m = (l+r)/2;
    	if (ok(m)) r = m;
    	else l = m;
    }
    cout << r;
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