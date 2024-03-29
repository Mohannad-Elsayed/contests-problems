// H. Harry the Curious
// Codeforces - Week 2 Sheet
// https://codeforces.com/group/42BcTs2lav/contest/404038/problem/H
// 2024-03-25 17:52:56

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
    int l, r, n; cin >> l >> r >> n;
    set<int> ste;
    while(!(n%2)){
    	ste.insert(2);
    	n/=2;
    }
    for (ll i = 3; i*i<=n; ++i){
    	while(!(n%i)){
    		ste.insert(i);
    		n/=i;
    	}
    }
    if (n!=1)ste.insert(n);
    auto it = ste.lwb(l);
    if (it == ste.end() || *it > r) return (cout << -1), 0;
    for (;it!=ste.end() && *it <= r;++it) cout << *it <<' ';
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