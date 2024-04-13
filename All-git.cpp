// The Seasonal War || UVA - 352

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int n;
char arr[25][25];
void makez(int x, int y){
    int indx = x, indy = y;
    for (int i = 0; i<8; i++){
        if (indx+dx[i] >= n || indx+dx[i] < 0 || indy+dy[i] >= n || indy+dy[i] < 0) continue;
        if (arr[indx+dx[i]][indy+dy[i]] == '1'){
            arr[indx+dx[i]][indy+dy[i]] = '0';
            // cout << indx+dx[i] << ' ' << indy+dy[i] << '\n';
            makez(indx+dx[i], indy+dy[i]);
        }
    }
};

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); 
    int ccnt = 1;
    while(cin >> n){
        int cnt = 0;
        for (int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                cin >> arr[i][j];

            }
        }
        for (int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if (arr[i][j] == '1'){
                    arr[i][j] = '0';
                    cnt++;
                    makez(i, j);
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n", ccnt, cnt);
        ccnt++;
    }
    return 0;
}

/*

6
100100
001010
000000
110000
111000
010100
8
01100101
01000001
00011000
00000010
11000011
10100010
10000001
01100000

*/