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
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if(n & 1){
        no;
        return;
    }
    // for(int i = 1; i < n; i++){
    //     if(arr[i] + 1 == arr[i - 1]){
    //         no;
    //         return;
    //     }
    // }
    // yes;
    ll mini = INT_MAX;
    ll maxi = -1;
    for(int i = 0; i < n; i += 2){
        mini = min(arr[i] - 1, mini);
        maxi = max(maxi, arr[i + 1] + 1);
        if(maxi > mini){
            no;
            return;
        }
    }
    yes;
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