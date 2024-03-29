// A. Always Fight!
// Codeforces - Week#1 Contest
// https://codeforces.com/group/42BcTs2lav/contest/405441/problem/A
// 2024-03-24 19:29:36

#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define each(a, x) for (auto &a : x)
#define ys cout << "YES";
#define ns cout << iostream"NO";
#define F first
#define S second
#define pb emplace_back
#define pf emplace_front
#define lwb lower_bound
#define upb upper_bound
typedef long long ll;
typedef long double ld;
typedef unsigned long long llu;
typedef short int si;
#define forn(i,a,b) for(llu i=(llu)(a);i<(llu)(b);i++)
#define rofn(i,a,b) for(llu i=(llu)(a);i>(llu)(b);i--)
const ll MOD {1000000007};
si solve(){
    string s1, s2; cin >> s1 >> s2;
    string res = "";
    res += s1[s1.size()-1];
    res += s2[s2.size()-1];
    cout << stoi(res)*5 << '\n' << (stoi(res)%2 ? "Desouky" : "Hossam");
    // cout << stoi(]) << '\n' << (stoi(s1[s1.size()-1] + s2[s2.size()-1]) %2 ? "Hossam" : "Desouky")
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int32_t t = 1;
    // cin >> t;
    forn(i, 1, t+1){
    	// cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
    return 0;
}