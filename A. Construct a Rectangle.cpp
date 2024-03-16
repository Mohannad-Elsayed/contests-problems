// A. Construct a Rectangle
// Codeforces - Educational Codeforces Round 120 (Rated for Div. 2)
// https://codeforces.com/problemset/problem/1622/A
// 2024-03-13 14:49:58

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
    int arr[3]; each(e, arr) cin >> e;
    sort(arr, arr+3);
    if ((arr[0] == arr[1] && !(arr[2]%2)) || (arr[2] == arr[1] && !(arr[0]%2))) ys
    else if (arr[0] + arr[1] == arr[2]) ys
    else ns
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