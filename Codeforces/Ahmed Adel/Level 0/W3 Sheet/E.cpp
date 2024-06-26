// E. Test #1
// Codeforces - Week 3 Sheet
// https://codeforces.com/group/42BcTs2lav/contest/406937/problem/E
// 2024-03-27 20:00:21

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
si solve(){
    ll n,k; cin >> n >> k;
    ll arr[n][n], sum = 0, res = -1;
    forn(i, 0, n) forn(j, 0, n) cin >> arr[i][j];
    forn(a, 0, n-k+1){
    	forn(b, 0, n-k+1){
    		sum = 0;
    		forn(i, a, a+k){
    			forn(j, b, b+k){
    				// cout << arr[i][j] << ' ';
    				sum += arr[i][j];
    			}
    			// cout << '\n';
    		}
    		res = max(res, sum);
    		// cout << sum << "\n\n";
    	}
    }
    cout << res;
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