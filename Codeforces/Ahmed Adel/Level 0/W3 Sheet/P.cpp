// P. Number Theory 101
// Codeforces - Week 3 Sheet
// https://codeforces.com/group/42BcTs2lav/contest/406937/problem/P
// 2024-03-29 20:53:19

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
ll gccd(ll n, ll m){
	if (!m) return n;
	return gccd(m, n%m);
}
ll lccm(ll n, ll m){
	return (n*m)/gccd(n, m);
}
si solve(){
	ll n, m; cin >> n  >> m;
	ll lc = lccm(n, m);
	cout << lc << endl;
	map<ll, ll> p;
	for (ll i = 2; i*i<=lc; ++i){
		while(!(lc%i)){ p[i]++; lc/=i;}
	} if (lc-1) p[lc]++;
	each(x, p){
		printf("%d^%d\n", x.F, x.S);
	}
	return 0;
}
int32_t main(){
    // ios_base::sync_with_stdio0);cin.tie(0);
    int32_t t = 1;
    // cin >> t;
    forn(i, 1, t+1){
    	// cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
    return 0;
}