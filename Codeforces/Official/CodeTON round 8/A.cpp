// A. Farmer John's Challenge
// Codeforces - CodeTON Round 8 (Div. 1 + Div. 2, Rated, Prizes!)
// https://codeforces.com/contest/1942/problem/0
// 2024-03-30 16:37:04

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
    int n, k; cin >> n >> k;
    if (n==1) return (cout << 1), 0;
    if (n==k){
    	forn(i, 0, n) cout  << 1 << ' ';
    	return 0;
    }
    if (k == 1){
    	forn(i, 0, n) cout  << i+1 << ' ';
    	return 0;
    }
    cout << -1;
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