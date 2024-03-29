// B. Maximum Sum
// Codeforces - Codeforces Round 936 (Div. 2)
// https://codeforces.com/contest/1946/problem/B
// 2024-03-22 16:48:44

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
int solve(){
    int n, k; cin >> n >> k;
    vector<ll> v(n);
    each(i, v) cin >> i;
    ll mxsf = LLONG_MIN, mxe = 0, sum = 0;
    each(i, v){
    	sum += i;
    	mxe += i;
    	if (mxsf < mxe) mxsf = mxe;
    	if (mxe < 0) mxe = 0;
    }
    if (mxsf < 1){
    	sum %= MOD;
    	sum += MOD;
    	sum %= MOD;		
    	return (cout << sum), 0;
    }
    ll res = mxsf;
    forn(i, 0, k){
    	res *= 2;
    	res %= MOD;
    }
    // cout << res << ' '<< sum << ' ' << mxsf << endl;
    res += (sum-mxsf);
	res %= MOD;
	res += MOD;
	res %= MOD;
	cout << res;    
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int32_t t = 1;
    cin >> t;
    forn(i, 1, t+1){
    	// cout << "#-------- " << i << '\n';
      	solve();
      	cout << '\n';
    }
    return 0;
}