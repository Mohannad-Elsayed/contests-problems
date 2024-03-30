// A. Packing Rectangles
// Codeforces - ITMO Academy: pilot course - Binary Search - Step 2
// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/A
// 2024-03-30 10:36:35

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
#define forn(i,a,b) for(llu i=(llu)(a);i<(llu)(b);i++)
#define rofn(i,a,b) for(llu i=(llu)(a);i>(llu)(b);i--)
const ll MOD {1000000007};
si solve(){
    llu w, h, n; cin >> w >> h >> n;
    llu l = 0, r = 1e14, m, res = 44534678;
    auto ok = [&](llu m) -> bool {
    	// cout << m << ' ' <<  m/w << ' ' << m/h <<  ' ' << ((m/w) * (m/h)) << '\n';
    	return ((m/w) * (m/h)) >= n;
    };
    while(l<=r){
    	m = l + (r-l)/2;
    	if (ok(m)){
    		res = m;
    		// cout << "res : " << res << '\n';
    		r = m-1;
    	} else l = m+1;
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