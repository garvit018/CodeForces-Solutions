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
const int MOD = 1e9 + 7;
/*

*/

void solve()
{
    string s;
    cin >> s;
    ll n = s.size();
    ll cnt = 0;
    ll pro = 1;
    for(int i = 0; i < n; i++){
        if(s[i] == 'a'){
            cnt++;
        }
        else if(s[i] == 'b'){
            pro = (pro * (cnt + 1)) % MOD;
            cnt = 0;
        }
    }
    pro = (pro * (cnt + 1)) % MOD;
    cout << (pro - 1) % MOD;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt = 1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}