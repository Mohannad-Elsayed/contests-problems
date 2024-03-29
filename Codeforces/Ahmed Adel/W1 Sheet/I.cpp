// I. 2-knights
// Codeforces - Week 1 Sheet
// https://codeforces.com/group/42BcTs2lav/contest/404035/problem/I
// 2024-03-18 18:29:00

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
int dx[4] = {2,2,-2,-2};
int dy[4] = {1,-1,1,-1};
#define MOD 1000000007
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    bool f = 0;
    forn(i, 0, 4){
    	int tx1 = x1, ty1 = y1;
    	tx1 += dx[i];
    	ty1 += dy[i];
    	if (tx1 == x2 && ty1 == y2) f=1;
    }
    forn(i, 0, 4){
    	int tx1 = x1, ty1 = y1;
    	tx1 += dy[i];
    	ty1 += dx[i];
    	if (tx1 == x2 && ty1 == y2) f=1;
    }
	cout << (f?"Yes":"No");
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