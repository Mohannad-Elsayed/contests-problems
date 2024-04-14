// Battleships UVA - 11953

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char arr[101][101];
bool vis[101][101];
int n;
void dfs(int i, int j){
    if (i == n || j == n || i < 0 || j < 0 || arr[i][j] == '.' || vis[i][j]) return;
    vis[i][j] = 1;
    dfs(i, j+1);
    dfs(i, j-1);
    dfs(i+1, j);
    dfs(i-1, j);
}

int main(){
    // ios_base::sync_with_stdio(0);cin.tie(0); 
    int tt; cin >> tt;
    for (int ttt = 1; ttt <= tt; ttt++){
        cin >> n;
        int cnt = 0;
        for (int i = 0; i<n;i++){
            for (int j=0; j<n; j++){
                cin >> arr[i][j];
            }
        }
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i<n;i++){
            for (int j=0; j<n; j++){
                if (!vis[i][j] && arr[i][j] == 'x'){
                    cnt++;
                    dfs(i, j);
                }
            }
        }
        printf("Case %d: %d\n", ttt, cnt);
    }

    return 0;
}

/*

2
4
x...
..x.
@.@.
....
2
..
x.



Case 1: 2
Case 2: 1

*/