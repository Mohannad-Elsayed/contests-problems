// B. Splitting an Array
// Codeforces - ITMO Academy: pilot course - Binary Search - Step 3
// https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/B
// 2024-04-05 11:09:11

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
    ll n, k; cin >> n >> k;
    ll arr[n]; forn(i, 0, n) cin >> arr[i];
    ll l = 0, r = LLONG_MAX, m, res = LLONG_MAX;
    auto check = [&](ll mid) -> bool {
    	ll curr_sum = 0, cnt = 0;
    	forn(i, 0, n){
    		if (arr[i] > mid) return false;
    		curr_sum += arr[i];
    		if (curr_sum >= mid || i == n-1){
    		// cout << curr_sum <<  ' ' << i <<  '\n';       //dbg
    			cnt++;
    			if (curr_sum > mid) i--;
    			curr_sum = 0;
    		}
    	}
    	// cout << "CNT1:   " << cnt << '\n';             //dbg
    	return cnt <= k;
    };
    while(l<=r) { // BS  on the max sum that can be formed
    	m = l + (r-l)/2;
    	// cout << "\n###################   " << m << '\n';              //dbg
    	if (check(m)){
    		res = min(res, m);
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