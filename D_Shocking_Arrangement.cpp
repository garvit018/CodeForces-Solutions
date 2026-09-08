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
#define yes cout << "Yes\n";
#define no cout << "No\n";

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
    ll maxi = *max_element(all(arr));
    ll mini = *min_element(all(arr));
    // if(maxi < maxi - mini){
    //     yes;
    //     for(int i = 0; i < n; i++){
    //         cout << arr[i] << " ";
    //     }
    //     cout << endl;
    //     return;
    // }
    // no;
    vi pos, neg;
    if(maxi == 0){
        no;
        return;
    }
    for(int i = 0; i < n; i++){
        if(arr[i] >= 0){
            pos.pb(arr[i]);
        }
        else{
            neg.pb(arr[i]);
        }
    }
    ll i = 0, j = 0;
    ll sum = 0;
    yes;
    for(int k = 0; k < n; k++){
        if(sum > 0){
            cout << neg[j] << " ";
            sum += neg[j++];
        }
        else{
            cout << pos[i] << " ";
            sum += pos[i++];
        }
    }
    cout << endl;
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