// B. Kuriyama Mirai's Stones
// Codeforces - Week 3 Sheet
// https://codeforces.com/group/42BcTs2lav/contest/406937/problem/B
// 2024-03-27 16:50:53

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
    int n, indx=1; cin >> n;
    vector<ll> v(n+1), u(n+1), inp(n);
    forn(i, 0, n) cin >> inp[i];
    each(x, inp){
    	v[indx++] = v[indx-1]+inp[indx-1];
    }
    sort(all(inp)); indx=1;
    each(x, inp){
    	u[indx++] = u[indx-1]+inp[indx-1];
    }
	int q; cin >> q;
	while(q--){
		int t, l, r; cin >> t >> l >> r;
		cout << (t==1 ? v[r]-v[l-1] : u[r]-u[l-1]) << '\n';
	}
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