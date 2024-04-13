// Mountain Scenery

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); 
    int n, k; cin >> n >> k;
    int arr[2*n+1];
    for (int i = 0; i<2*n+1; i++) cin >> arr[i];
    for (int i = 1; i<2*n+1, k; i+=2){
        if (arr[i]-1 > arr[i+1] && arr[i]-1 > arr[i-1]){
            arr[i]--;
            k--;
        }
    }
    for (auto x : arr) cout << x << ' ';
    return 0;
}

/*

3 2
0 5 3 5 1 5 2

1 1
0 2 0


*/