// B. Bessie and MEX
// Codeforces - CodeTON Round 8 (Div. 1 + Div. 2, Rated, Prizes!)
// https://codeforces.com/contest/1942/problem/B
// 2024-03-30 16:49:33

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
    int n; cin >> n;
    deque<int> p, v(n);
    forn(i, 0, n) cin >> v[i];
    reverse(all(v));
    // each(x, v) cout << x << ' ';
    int curr_mex = n;
    forn(i, 0, n){
    	// cout << curr_mex << ' ' << v[i] << ' ' << curr_mex-v[i] << endl;
    	p.emplace_front(curr_mex-v[i]);
    	if (p.front() < curr_mex) curr_mex = p.front();
    }
    each(x, p) cout << x << ' ';
    return 0;
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int32_t t = 1;
    cin >> t;
    forn(i, 1, t+1){
    	// cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
    return 0;
}