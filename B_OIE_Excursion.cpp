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
    ll n, m;
    cin >> n >> m;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ll cnt = 1;
    ll maxi = 0;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] == arr[i + 1]){
            cnt++;
        }
        else{
            maxi = max(cnt, maxi);
            cnt = 1;
        }
    }
    maxi = max(maxi, cnt);
    if(maxi >= m){
        no;
    }
    else{
        yes;
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