// B. Gaza is under siege, world.
// Codeforces - Contest #2
// https://codeforces.com/group/XIc7NSO7Rd/contest/510792/problem/B
// 2024-03-13 23:33:04

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
    int n, tmp; cin >> n;
    vector<int> v(n);
    each(e, v) cin >> e;
    sort(rall(v));
    int l = 0, r = n-1;
    int cnt = 0, cnt2 = 0;
    while(l<r){
    	cnt += ((v[l++] - v[r--])/2);
    }
    sort(rall(v));
    l = 0; r = n-1;
    while(l<r){
    	cnt2 += ((v[l++] - v[r--])/2);
    }
    // each(x, v) cout << x << ' ';
    // cout << cnt << ' ' << cnt2;
    cout << min(cnt, cnt2);
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int test = 1;
    // cin >> test;
    forn(i, 1, test+1){
    	// cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
}