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
clock_t startTime;
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}

bool is(int n)
{
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

map< int64_t,int64_t > primeFactorization(int64_t n){
    if( n <= 1 )
    {
        return ( map< int64_t , int64_t > {} );
    }
    map< int64_t,int64_t > primeFactor;
 
    while( !(n % 2 ) )
        primeFactor[2]++, n /= 2;
 
    while( !(n % 3 ) )
        primeFactor[3]++, n /= 3;
 
    for (int64_t i = 5; i * i <= n; i += 6) {
 
        while( !( n % i ) )
        {
            primeFactor[ i ] ++;
            n /= i;
        }
        while( !( n % (i + 2) ) ){
            primeFactor[ i + 2 ] ++;
            n /= (i + 2);
        }
 
    }
    if( n > 1 )
    {
        primeFactor[n] = 1;
    }
    return primeFactor;
}

int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int arr[] = {1,10,11,100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111};
    // each(x, arr){
    	// each(y, arr){
    		// cout << x << ' ' << y << "    " << x*y << '\n';
    	// }
    // }
    map< int64_t,int64_t > mp = primeFactorization(1122210);
    each(x, mp){
    	cout << x.F << ' ' << x.S << '\n';
    }
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