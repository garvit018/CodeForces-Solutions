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
try removing first openeing , last closing 
phir compare krlo score
*/

void solve()
{
    ll n, k;
    string s;
    cin >> n >> k >> s;
    vi o, c;
    for(int i = 0; i < n; i++){
        if(s[i] == '('){
            o.pb(i);
        }
        else{
            c.pb(i);
        }
    }
    ll a = c.size();
    ll mini = INT_MAX;
    string ans;
    for(int i = 0; i <= k; i++){
        if(i > o.size() || (k - i) > a){
            continue;
        }
        string t(n, '0');
        for(int j = 0; j < i; j++){
            t[o[j]] = '1';
        }
        for(int j = k - i; j > 0; j--){
            t[c[a - j]] = '1';
        }
        ll cnt = 0, cnt1 = 0;
        for(int j = 0; j < n; j++){
            if(t[j] == '1'){
                continue;
            }
            if(s[j] == '('){
                cnt++;
            }
            else{
                if(cnt > 0){
                    cnt--;
                    cnt1++;
                }
            }
        }
        if(cnt1 < mini){
            mini = cnt1;
            ans = t;
        }
    }
    cout << ans << endl;
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