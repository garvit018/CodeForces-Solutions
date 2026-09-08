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
    vi arr(n);
    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if(n == 1){
        if(arr[0] > 2){
            yes;
            return;
        }
        else{
            no;
            return;
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == 2){
            cnt++;
        }
        if(arr[i] >= 3){
            yes;
            return;
        }
    }
    if(cnt >= 2){
        yes;
    }
    else{
        no;
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