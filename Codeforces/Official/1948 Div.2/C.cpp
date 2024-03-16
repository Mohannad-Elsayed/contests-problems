// C. Arrow Path
// Codeforces - Educational Codeforces Round 163 (Rated for Div. 2)
// https://codeforces.com/contest/1948/problem/C
// 2024-03-15 17:56:18

#include<bits/stdc++.h>
using namespace std;
#define forn(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define rofn(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define each(a, x) for (auto &a : x)
#define ys cout << "YES"
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
	int n; cin >> n;
    char arr[2][n];
	cin >> arr[0] >> arr[1];
    // cout << arr[1];
    int y = 0, x = 0, t = n-1;
    forn(i, 0, n+1000){
    	// cout << x << ' ' << y << '\n';
    	if (arr[y][x+1] == '<' && y == 1) y = 0;
    	else if (arr[y][x+1] == '<' && y == 0) y = 1;
    	else if (arr[y][x+1] == '>') x++;
    	if (x == t) return (ys), 0;
    	if(arr[y][x] == '<') x--;
    	else if (arr[y][x] == '>') x++;
    }
    ns
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