// E. Boots
// Codeforces - Week#3 Contest
// https://codeforces.com/group/42BcTs2lav/contest/406964/problem/E
// 2024-03-26 16:41:45

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
    int n, t; cin >> n; int l[1001]{};
    forn(i, 0, n){
    	cin >> t; l[t]++;
    }
    forn(i, 0, n){
    	cin >> t; l[t]--;
    }
    int cnt= 0;
    forn(i, 0, 1001) if (l[i]!=0) cnt+=abs(l[i]);
    cout << cnt/2;
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