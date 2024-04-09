#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void tc(){
    int n, e, res = 0; cin >> n >> e;
    int arr[n]; for (auto &x : arr) cin >> x;
    auto check = [&](int x) -> bool {
        if (x < 2) return false;
        for (ll i = 2; i*i<=x; ++i){
            if (!(x%i)) return false;
        }
        return true;
    };
    for (int i = 0; i<n/2; ++i){
        if (i+e >= n) break;
        int p = 0, ones = 0;
//        cout << arr[i] << ' ' << arr[i+e] << '\n';
        if (arr[i] == 1) ones++;
        else if (check(arr[i])) p++;
        else continue;
        if (arr[i+e] == 1)ones++;
        else if (check(arr[i+e])) p++;
        else continue;
        if (p == 1) { res++; }
        for (int j = 2; i+j*e<n; ++j){
            if (arr[i+j*e] == 1)ones++;
            else if (check(arr[i+j*e])) p++;
            else break;
            if (p == 1) res++;
            if (p > 1) break;
        }
        if (p > 1){
            if (arr[i] == 1)ones--;
            else if (check(arr[i])) p--;
            if (p == 1 && ones > 0) { res++; }
            if (arr[i+e] == 1) ones--;
            else if (check(arr[i+e])) p--;
            if (p == 1 && ones > 0) { res++; }
            for (int j = 2; i+j*e<n; ++j){
                if (arr[i+j*e] == 1) ones--;
                else if (check(arr[i+j*e])) p--;
                if (p == 1 && ones > 0) res++;
                if (p < 1) break;
            }

        }
    }
    cout << res;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    for ( int i = 1; i<=n; i++ ){
//        cout << "############  " << i << '\n';
        tc();
        cout << '\n';
    }
    return 0;
}

/*
6

7 3
10 2 1 3 1 19 3

3 2
1 13 1

9 3
2 4 2 1 1 1 1 4 2

3 1
1 1 1

4 1
1 2 1 1

2 2
1 2

*/