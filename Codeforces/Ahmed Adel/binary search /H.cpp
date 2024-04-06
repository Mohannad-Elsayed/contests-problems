// H. Primes on Interval
// Codeforces - binary search
// https://codeforces.com/group/cyvgQdjAuu/contest/424337/problem/H
// 2024-04-05 16:00:59

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
	int N = 1e6+10;
    vector<bool> v(N, true);
    v[0] = 0; v[1] = 0;
    for (ll i = 2; i*i <= N; ++i){
    	if (v[i]){
    		for (ll j = i*i; j<N; j+=i) v[j] = false;
    	}
    }
    vector<int> pfx(N); int sum = 0;
    forn(i, 0, N){
    	sum += v[i];
    	pfx[i] = sum;
    }
    // forn(i, 0, 15) cout << pfx[i] << ' ';       
    ll a, b, k; cin >> a >> b >> k;
    ll l = 1, r = b-a+1, m, res = -1;
    
    // cout << "a b -> " << a << ' ' << b << '\n';
    auto check = [&](ll sch) -> bool {
    	// cout << "\n__________________________\n";
    	// cout << a << ' ' << b-sch+1 << '\n';
    	// if (a == b-sch+1) return false;
    	forn(i, a, b-sch+2){
			// cout << pfx[i+sch] << ' ' << pfx[i] << '\n' << "sear " <<  i+sch-1 << ' ' << i-1 << endl;
    		if (pfx[i+sch-1] - pfx[i-1] < k){
    			return false;
    		}
    	}
    	// cout << "^ True\n";
    	return true;
    };
    while(l<=r){
    	m = (l+r)/2;
    	if (check(m)){
    		// cout << m << '\n';
    		res = m; 
    		r = m-1;
    	} else l = m+1;
    }
    cout << res;
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