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
    string s;
    ll pos;
    cin >> s >> pos;
    // pos--;
    vector<char> ans;
    ll n = s.size();
    ll cnt = 0;
    ll temp = n;
    while(temp < pos){
        pos -= temp;
        temp--;
        cnt++;
    }
    // ans.pb(s[0]);
    // ll j = 1;
    // for(int i = 0; i < cnt; i++){
    //     while(j < n && ans.back() <= s[j]){
    //         ans.pb(s[j]);
    //         j++;
    //     }
    //     ans.pop_back();
    // }
    // while(j < n){
    //     ans.pb(s[j]);
    //     j++;
    // }
    // // for(auto it : ans){
    // //     cout << it;
    // // }
    // // cout << endl;
    // cout << ans[pos - 1];
    for(int i = 0; i < n; i++){
        while(cnt > 0 && !ans.empty() && ans.back() > s[i]){
            ans.pop_back();
            cnt--;
        }
        ans.pb(s[i]);
    }
    while(cnt > 0){
        ans.pop_back();
        cnt--;
    }
    cout << ans[pos - 1];
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