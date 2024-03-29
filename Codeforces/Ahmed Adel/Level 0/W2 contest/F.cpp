// F. Hexadecimal's theorem
// Codeforces - Week#2 Contest
// https://codeforces.com/group/42BcTs2lav/contest/406789/problem/F
// 2024-03-26 13:14:42

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
	int n, tn; cin >> n;
	tn = n;
  	set<ll> fib{0,1};
  	int res[3];
  	ll f1 = 0, f2 = 1;
  	forn(i, 0, 45){
  		fib.insert(f1+f2);
  		f2=f1+f2;
  		f1=f2-f1;
  	}
  	// each(x, fib) cout << x << endl;
  	forn(i, 0, 3){
  		auto it = fib.lwb(n);
  		if (*it > n) --it;
  		n-=*it;
  		res[i] = *it;
  	}
  	ll ans = res[0]+res[1]+res[2];
  	if (ans == tn)
  		each(x, res) cout << x << ' ';
  	else cout << "I'm too stupid to solve this problem";
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