// A. Download More RAM
// Codeforces - Codeforces Round 767 (Div. 2)
// https://codeforces.com/problemset/problem/1629/A
// 2024-03-17 15:45:27

#include<bits/stdc++.h>
using namespace std;
#define forn(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define rofn(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define each(a, x) for (auto &a : x)
#define ys cout << "YES";
#define ns cout << "NO";
#define F first
#define S second
#define pb push_back
typedef long long ll;
typedef long double ld;
typedef unsigned long long llu;
typedef short int si;
#define MOD 1000000007
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, k; cin >> n >> k;
    vector<pair<int, int>> v(n);
    each(i, v) cin >> i.F;
    each(i, v) cin >> i.S;
    sort(all(v));
    // each(i, v) cout << i.F << ' ' << i.S << endl;
    each(i, v){
    	if (k<i.F)break;
    	k+=i.S;
    }
    cout << k;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int test = 1;
    cin >> test;
    forn(i, 1, test+1){
    	// cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
}