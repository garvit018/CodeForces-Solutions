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
    mapii mp, mp1;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    if(!mp.count(0)){
        cout << -1 << endl;
        return;
    }
    ll prevK = 0;
    ll prevCnt = mp[0];
    ll sum = 0;
    ll prev = 0;
    ll curr = 0;
    for(auto it : mp){
        if(it.first == 0){
            continue;
        }
        ll val = it.first;
        ll req = val - sum;
        if(req % prevCnt != 0){
            cout << -1 << endl;
            return;
        }
        curr = req / prevCnt;
        if(curr <= prev){
            cout << -1 << endl;
            return;
        }
        sum += curr * prevCnt;
        mp1[prevK] = curr;
        prevK = val;
        prevCnt = it.second;
        prev = curr;
    }
    mp1[prevK] = curr + 1;
    for(int i = 0; i < n; i++){
        cout << mp1[arr[i]] << " ";
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