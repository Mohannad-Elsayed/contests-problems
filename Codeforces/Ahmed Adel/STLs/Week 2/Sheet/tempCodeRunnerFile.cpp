#include <bits/stdc++.h>

using namespace std;

void tc() {
    long long n;
    cin >> n;
    int res = 0;
    for (int i = 1; n; i++) {
    // cout << n << ' ';
        if (n & 1 || (n != 4 && !((n/2)&1))) { // if n is odd or even when divided by 2, take one gold
            n--;
            if (i & 1) res++;
        }
        else{ 
            n /= 2;
            if (i & 1) res += n;
        }
    }
    cout << res;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        tc();
        cout << '\n';
    }

    return 0;
}

/*
2
5
6
*/