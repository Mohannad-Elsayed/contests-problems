// A. Setting up Camp
// Codeforces - Codeforces Round 935 (Div. 3)
// https://codeforces.com/contest/1945/problem/A
// 2024-03-19 14:30:06

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
    int a, b, c; cin >> a >> b >> c;
    if (b%3 && b%3+c < 3) return (cout << -1), 0;
    int res = a; res += b/3;
    if (b%3){
    	res++;
		c -= 3-b%3;
    }
	res += c/3 + !(!(c%3));
    cout << res;
    
    
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