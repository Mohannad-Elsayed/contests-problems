// D. Three Activities
// Codeforces - Codeforces Round 916 (Div. 3)
// https://codeforces.com/problemset/problem/1914/D
// 2024-04-01 11:14:34

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
// 	iota(pa.begin(), pa.end(), 0);
    int n; cin >> n;
	vector<int> a(n), b(n), c(n), ia(n), ib(n), ic(n);
	forn(i, 0, n){
		cin >> a[i];
		ia[i] = i;
	}forn(i, 0, n){
		cin >> b[i];
		ib[i] = i;
	}forn(i, 0, n){
		cin >> c[i];
		ic[i] = i;
	}
	int res = 0;
	
	sort(all(ia), [&](int i, int j){
		return a[i] > a[j];
	});
	sort(all(ic), [&](int i, int j){
		return c[i] > c[j];
	});
	sort(all(ib), [&](int i, int j){
		return b[i] > b[j];
	});
	
	forn(i, 0, 3){
		forn(j, 0, 3){
			forn(k, 0, 3){
				if (ia[i] != ib[j] && ia[i] != ic[k] && ib[j] != ic[k]){
					res = max(res, a[ia[i]] + b[ib[j]] + c[ic[k]]);
				}
			}
		}
	}
	cout << res;
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