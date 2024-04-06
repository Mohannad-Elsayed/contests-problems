// C. Cows in Stalls
// Codeforces - ITMO Academy: pilot course - Binary Search - Step 3
// https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/C
// 2024-04-05 13:44:13

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
    ll s, c; cin >> s >> c;
    vector<ll> v(s);
    forn(i, 0, s) cin >> v[i];
    // if (c == 2) return (cout << v.back() - v.front(), 0);
    ll l = 0, r =  v.back() - v.front(), m, res;
    
    auto ok = [&](ll mid) -> bool {
    	ll curr_dis = 0, mndis = v.back() - v.front(), cnt = 0;
    	forn(i, 1, s){
    		curr_dis+= (v[i]-v[i-1]);
    		if (curr_dis >= mid){
    			if (cnt == c-2) break;
    			cnt++;
    			mndis = min({mndis, curr_dis, v.back()-v[i]});
    			
    			// cout << curr_dis << ' ' << mndis << ' ' << v[i] <<  //dbg 
    			 		// '\n' << cnt << '\n';                        //dbg  
    			 		                  
    			curr_dis = 0;
    		}
    	}
    	if (cnt == c-2 && mndis >= mid) return true;
    	return false;
    };
    
    while(l<=r){
    	m = l + (r-l)/2;
    	// cout << "######## -> " << m << '\n';       //dbg
    	if (ok(m)){
    		res = m;
    		l = m+1;
    	} else r = m-1;
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