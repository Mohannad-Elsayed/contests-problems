// E. Shy Rythm
// Codeforces - Week 1: Contest
// https://codeforces.com/group/V8Dgg1V6Pd/contest/412383/problem/E
// 2024-03-20 23:21:24

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
#define MOD 1000000007ll
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    llu n, a, b; cin >> n >> a >> b;
    llu lx, rx, ly, ry; scanf(" %llu %llu %llu %llu", &lx, &rx, &ly, &ry);
    forn(i, lx/a, (rx)/a+1){
    	forn(j, ly/b, (ry)/b+1){
    		if (i+j == n){
    			printf("%d %d | %d %d | %d\n", i, j, i*a, j*b, i*a+j*b);
    		}
    	}
    }
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