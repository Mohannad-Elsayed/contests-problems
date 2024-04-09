// B. Just Eat It!
// Codeforces - Codeforces Round 613 (Div. 2)
// https://codeforces.com/contest/1285/problem/B
// 2024-04-07 17:36:44

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
    ll n, sum = 0, tmp; cin >> n;
    ll arr[n], pfx[n+1]{};
    forn(i,0, n){
    	cin >> arr[i];
    	sum += arr[i];
    	pfx[i+1] = sum;
    }
	ll mx1 = -1e16, mx2 = -1e16, curr = 0;
	forn(i, 1, n){
		curr += arr[i];
		mx1 = max(mx1, )
	}
    // mx -> adel
    // sum -> yasser
	cout << mx << ' ' << sum << '\n';
    cout << (sum > mx ? "YES" : "NO");
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