// J. Good Subsequence
// Codeforces - Week 3 Sheet
// https://codeforces.com/group/42BcTs2lav/contest/406937/problem/J
// 2024-03-29 08:35:54

#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define each(a, x) for (auto &a : x)
#define ys cout << "YES";
#define ns cout << "NO";
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
    bool f = 1;
    if (s2.size() > s1.size()) return (cout << "NO "), 0;
    stack<char> q1, q2;
    each(ch, s1) q1.push(ch);
    each(ch, s2) q2.push(ch);
    while(!q1.empty()){
    	if (q1.top() == q2.top()) q2.pop();
    	q1.pop();
    	if (!q2.size()) return (cout << "YES"), 0;
    }
    return (cout << "NO "), 0;
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