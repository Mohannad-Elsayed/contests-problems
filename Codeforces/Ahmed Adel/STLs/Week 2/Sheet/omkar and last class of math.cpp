// B. Omkar and Last Class of Math
// Codeforces - Codeforces Round 655 (Div. 2)
// https://codeforces.com/problemset/problem/1372/B
// 2024-04-07 15:29:44

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
    int n; cin >> n;
    int k = 1; 
    auto prime = [&](int x) {
    	for (int i = 2; i*i<=x; i++){
    		if (!(x%i)) return false;
    	}
    	return true;
    };
    for (int i = 2; i*i<=n; ++i){
    	if (!(n%i) && prime(i)){
    		k = n/i;
    		break;
    	}
    }
    cout << k << ' ' << n-k;
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