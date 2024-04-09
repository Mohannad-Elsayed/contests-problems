// B. Progressive Square
// Codeforces - Codeforces Round 938 (Div. 3)
// https://codeforces.com/contest/1955/problem/B
// 2024-04-08 16:39:17

#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define each(a, x) for (auto &a : x)
#define ys cout << "YES"
#define ns cout << "NO"
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
    ll n, c, d, tmp; cin >> n >> c >> d;
    multiset<int> mste;
    forn(i, 0, n*n){
    	cin >> tmp;
    	mste.insert(tmp);
    }
    ll arr[n][n]; arr[0][0] = *mste.begin();
    forn(i, 0, n){
    	if (i) arr[0][i] = arr[0][i-1] + d;
    	if (mste.find(arr[0][i]) == mste.end()) return (ns), 0;
    	else mste.erase(mste.find(arr[0][i]));
    	forn(j, 1, n){
    		arr[j][i] = arr[j-1][i] + c;
    		if (mste.find(arr[j][i]) == mste.end()) return (ns), 0;
    		else mste.erase(mste.find(arr[j][i]));
    	}
    }
    ys;
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