// Problem: ZB. Prefix Sum Primes
// Contest: Codeforces - NumberTheory
// URL: https://codeforces.com/group/9QrbarK7qH/contest/481806/problem/ZB
// When: 2024-03-07 06:41:08

#include<bits/stdc++.h>
using namespace std;
#define forn(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define rofn(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define each(a, x) for (auto &a : x)
#define ys cout << "YES";
#define ns cout << "NO";
#define F first
#define S second
#define pb push_back
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
bool isprime(ll x){
	if (x < 2) return 0;
	for (ll i = 2; i*i<=x; ++i){
		if (!(x%i)) return 0;
	}
	return 1;
}
bool comp(const int& a, const int& b){
	return (isprime(a-b));
}
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n; cin >> n; vector<int> v(n); 
    each(x, v) cin >> x; 
    sort(all(v), comp);
    // each(x, v) cout << x << ' ';
    int cnt = 0, pfx[n]; pfx[0] = v[0];
    forn(i, 1, n) pfx[i] = pfx[i-1]+v[i];
    sort(pfx, pfx+n, comp);
    each(x, pfx) {cout << x << ' '; if (isprime(x)) ++cnt;}
    cout << endl << cnt;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int test = 1;
    // cin >> test;
    // cout << "# " << test << '\n';
    while(test--){
      solve();
      cout << '\n';
    }
}