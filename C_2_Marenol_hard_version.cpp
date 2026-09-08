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
1 oper seedhe 2 jump maarega 
so end mai /2 krna hai
*/

void solve()
{
    ll n; 
    string s, a;
    cin >> n >> s >> a;
    // if(s == a){
    //     yes;
    //     return;
    // }
    // if(n < 3){
    //     no;
    //     return;
    // }
    vi se, so, ae, ao;
    for(int i = 0; i < n; i++){
        if(i & 1){
            if(s[i] == '1'){
                so.pb(i);
            }
            if(a[i] == '1'){
                ao.pb(i);
            }
        }
        else{
            if(s[i] == '1'){
                se.pb(i);
            }
            if(a[i] == '1'){
                ae.pb(i);
            }
        }
    }
    // if(se.size() == ae.size() && so.size() == ao.size()){
    //     yes;
    //     return;
    // }
    if(se.size() != ae.size() || so.size() != ao.size()){
        cout << -1 << endl;
        return;
    }
    ll ans = 0;
    for(int i = 0; i < se.size(); i++){
        ans += abs(se[i] - ae[i]);
    }
    for(int i = 0; i < so.size(); i++){
        ans += abs(so[i] - ao[i]);
    }
    cout << ans / 2 << endl;
    // no;
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