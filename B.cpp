// Problem: B. Fair Division
// Contest: Codeforces - Codeforces Round 693 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1472/B
// When: 2024-03-11 06:20:37

#include<bits/stdc++.h>
using namespace std;
#define forn(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define rofn(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define each(a, x) for (auto &a : x)
#define ys return (cout << "YES"), 0;
#define ns return (cout << "NO"), 0;
#define F first
#define S second
#define pb push_back
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
#define MOD 1000000007
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, tmp, cnt1 = 0, cnt2 = 0, sum = 0; cin >> n;
    forn(i, 0, n){
    	cin >> tmp;
    	tmp == 1 ? cnt1++ : cnt2++;
    	tmp == 1 ? sum+=1 : sum+=2;
    }
    // cout << cnt2 << ' ' << cnt1 << ' ' << sum;
    
    if (!cnt1 && cnt2%2 || (cnt1%2)) ns
	ys
    
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