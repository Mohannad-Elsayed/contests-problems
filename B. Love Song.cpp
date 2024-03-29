// B. Love Song
// Codeforces - Codeforces Round 727 (Div. 2)
// https://codeforces.com/problemset/problem/1539/B
// 2024-03-17 16:09:12

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
    int n, q; cin >> n >> q;
    
    vector<int> v(n+1);
    ll sum = 0;
    forn(i, 1, n+1){
    	char ch; cin >> ch;
    	// cout << ch;
    	ch -= 'a';
    	sum += ++ch;
    	v[i] = sum;
    }
    // each(x, v) cout << x << ' ' ;cout << endl;
    while(q--){
    	int l, r; cin >> l >> r;
    	cout << v[r] - v[l-1] << '\n';
    }
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