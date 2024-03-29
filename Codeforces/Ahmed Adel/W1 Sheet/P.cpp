// P. master of money
// Codeforces - Week 1 Sheet
// https://codeforces.com/group/42BcTs2lav/contest/404035/problem/P
// 2024-03-19 20:14:46

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
#define MOD 1000000007
typedef long long ll;
typedef long double ld;
typedef unsigned long long llu;
typedef short int si;
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int x, y, n; cin >> x >> y >> n;
    if (3*x < y) return (cout << n*x), 0;
    cout << (n/3*y) + n%3*x;
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