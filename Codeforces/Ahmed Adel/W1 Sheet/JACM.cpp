// N. Nada The Chess Master
// Codeforces - Week 1 Sheet
// https://codeforces.com/group/42BcTs2lav/contest/404035/problem/N
// 2024-03-18 19:13:09

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
    char x, y;
    cin >> x >> y;
    x-='a'-1; y -= '0';
	int a = x, b = y, cnt = 0;
	// cout << a << ' ' <<b;
	forn(i, 1, 9){
		forn(j, 1, 9){
			if (abs(a-i) == abs(b-j)){
				++cnt;
				// printf("%d %d %d %d\n", i, a, j, b);
			}
		}
	}
	cout << --cnt;
    // !Stop Here! */
    return 0;
}
int main(){
    // ios_base::sync_with_stdio(false);cin.tie(0);
    int test = 1;
    // cin >> test;
    forn(i, 1, test+1){
    	// cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
}