// D. Inaccurate Subsequence Search
// Codeforces - Codeforces Round 938 (Div. 3)
// https://codeforces.com/contest/1955/problem/D
// 2024-04-08 17:19:21

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
si solve(){
    ll n, m, k; cin >> n >> m >> k;
    ll a[n], b[m];
    	each(x, a) cin >> x; 
    	each(x, b) cin >> x;
    map<ll, ll> frq1, frq2;
    ll cntmatch = 0, frqmatch = 0;
    forn(i, 0, m){
    	frq1[a[i]]++;
    	frq2[b[i]]++;
    }
    // each(x, frq1) cout << x.F << ' ' << x.S << '\n';
    each(x, frq1){
    	if (frq2.count(x.F) && x.S >= frq2[x.F]) frqmatch++;
    }
    if (frqmatch >= k) cntmatch++;
    forn(i, m, n){
    	if (a[i] == a[i-m]) {if (frqmatch >= k) cntmatch++; continue;}
    	frq1[a[i]]++;
    	frq1[a[i-m]]--;
    	if (frq2.count(a[i-m]) && frq1[a[i-m]] < frq2[a[i-m]]
    		 && frq1[a[i-m]] +1 >= frq2[a[i-m]]) frqmatch--;
    	else {
    		if (frq2.count(a[i]) && frq1[a[i]] >= frq2[a[i]]
    		 && frq1[a[i]] -1 < frq2[a[i]]) frqmatch++;
    	}
    	// each(x, frq1) cout << x.F << ' ' << x.S << '\n';
    	// cout << frqmatch << '\n';
    	if (frqmatch >= k) cntmatch++;
    }
    cout << cntmatch;
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