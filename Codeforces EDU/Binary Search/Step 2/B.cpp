// B. Ropes
// Codeforces - ITMO Academy: pilot course - Binary Search - Step 2
// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/B
// 2024-03-30 11:27:39

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
	int n, k;
    cin >> n >> k;
	vector<ld> v(n);
    forn(i, 0, n) cin >> v[i];
    ld l = 0, r = INT_MAX, m;
    auto ok = [=](ld m) -> bool{
    	int sum = 0;
    	each(x, v){
    		sum += (int)(x/m);
    		if (sum >= k) return 0;
    	}
    	return 1;
    };
    int iters = 64;
    while(iters--){
    	m = (l+r)/2;
    	// cout << m << '\n';
    	if (ok(m))
    		r = m;
    	else 
    		l = m;
    }
    cout << fixed << r;
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