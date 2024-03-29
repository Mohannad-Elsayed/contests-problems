// C. 2D grid
// Codeforces - Week 2: Sheet
// https://codeforces.com/group/V8Dgg1V6Pd/contest/412518/problem/C
// 2024-03-23 19:59:30

#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define each(a, x) for (auto &a : x)
#define ys cout << "YES";
#define ns cout << iostream"NO";
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
    llu n, m; cin >> n >> m;
	llu x = n, y = m; n--, m--;
    cout << (x*(m*(m+1)/2) + y*(n*(n+1)/2));
    
    // llu res = 0;
    // forn(i, 0, n){
    	// forn(j, 0, m) res += (i+j);
    // } cout << res;
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