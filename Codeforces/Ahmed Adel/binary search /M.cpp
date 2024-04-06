// M. Use Sieve if you can
// Codeforces - binary search
// https://codeforces.com/group/cyvgQdjAuu/contest/424337/problem/M
// 2024-04-05 16:35:23

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
    ll x, y; cin >> x >> y;
    map<ll, ll> mp;
    for (ll i = 2; i*i<=x; ++i){
    	while(!(x%i)){
    		mp[i]++;
    		x/=i;
    	}
    }
    if (x!= 1) mp[x]++;
    cout << mp.size() << '\n';
    each(x, mp){
    	cout << x.F << ' ' << x.S * y << '\n';
    }
    return 0;
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