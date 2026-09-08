#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define pi pair<ll,ll>
#define mapii map<ll, ll>
#define vpi vector<pair<ll,ll>>
#define endl '\n'
#define pb push_back
#define rall(x) x.rbegin(), x.rend()
#define yes cout << "YES\n";
#define no cout << "NO\n";
int MOD = 1e9 + 7;
/*
n = 4, k = 3
3 2 1 1 
arr[k - 1] = 1
2C1 = 2;
*/

ll nCr[1001][1001];

void precomp(){
    for(int i = 0; i < 1001; i++){
        nCr[i][0] = 1;
        for(int j = 1; j <= i; j++){
            nCr[i][j] = (nCr[i - 1][j - 1] + nCr[i - 1][j]) % MOD;
        }
    }
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(rall(arr));
    ll ele = arr[k - 1];
    ll cnt = 0, c = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == ele){
            cnt++;
        }
    }
    for(int i = 0; i < k; i++){
        if(arr[i] == ele){
            c++;
        }
    }
    cout << nCr[cnt][c] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    precomp();
    ll tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}