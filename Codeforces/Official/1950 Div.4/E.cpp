// E. Nearly Shortest Repeating Substring
// Codeforces - Codeforces Round 937 (Div. 4)
// https://codeforces.com/contest/1950/problem/E
// 2024-03-28 17:51:33

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
string s;
bool ok(int x){
	int n = s.size();
	int cnt = 0;
	int off = 0;
	bool b = false; int it = 20;
	set<string> ste;
	forn(i, 0, n/x){
		string ss;
		for (int j = i; j<n; j+=x){
			ss += s[j];
		}
		cout << x << ' ' << ss << endl;
		ste.insert(ss);
	}
	return (ste.size() < 3 ? 1 : 0);
}
si solve(){
    int n; cin >> n;
    cin >> s;
    n = s.size();
    set<int> ste;
    for (ll i = 1; i*i<=n; ++i){
		if (n%i) continue;
		ste.insert(i); ste.insert(n/i);
    }
    // each(x, ste) cout << x << ' '; cout << '\n';
	int l = 1, r=n, m, res;
	while(l<=r){
		m = (l+r)/2;
		auto it = ste.lower_bound(m);
		// cout << *it << ' ';
		// cout << '\n';
		if (ok(*it)){
			res = *it;
			r = m-1;
		} else l = m+1;
	}
	cout << res;
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