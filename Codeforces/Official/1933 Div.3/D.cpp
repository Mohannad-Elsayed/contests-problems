// Problem: D. Turtle Tenacity: Continual Mods
// Contest: Codeforces - Codeforces Round 929 (Div. 3)
// URL: https://codeforces.com/contest/1933/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// By: Sakura Yamauchi
// When: 2024-02-27 17:02:00
// Topic: 
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define forn(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define rofn(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
#define ys cout << "YES";
#define ns cout << "NO";
#define F first
#define S second
#define pb push_back
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
int test = 1;
int solve(){
  	//TODO tests()  solve() //
    int n; cin >> n;
    int arr[n];
    forn(i ,0, n) cin >> arr[i];
    sort(arr, arr+n);
    if (arr[0] != arr[1]) return (cout << "YES"), 0;
    forn(i, 0, n){
    	if (arr[i]%arr[0] != 0) return (cout << "YES"), 0;
    }
    ns
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    cin >> test;
    while(test--){
      solve();
      cout << '\n';
    }
}