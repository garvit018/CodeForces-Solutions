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
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";

/*

*/

void solve()
{
    ll n;
    cin >> n;
    vi arr(n), brr(n);
    ll o = 0, z = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] == 1){
            o = 1;
        }
    }
    for (int i = 0; i < n; i++) {
        cin >> brr[i];
        if(brr[i] == 0){
            z = 1;
        }
    }
    if(arr == brr){
        cout << 0 << endl;
        return;
    }
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != brr[i] && arr[i] == 1){
            cnt++;
        }
    }
    if(cnt == 0){
        if(o == 0 || z == 0){
            cout << -1 << endl;
            return;
        }
    }
    if(cnt & 1){
        cout << 1 << endl;
    }
    else{
        cout << 2 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}