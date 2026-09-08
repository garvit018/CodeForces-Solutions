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
    string s;
    cin >> s;
    ll q;
    cin >> q;
    vi a(q), b(q);
    for(int i = 0; i < q; i++){
        cin >> a[i] >> b[i];
    }
    ll cnt = 0, cnt1 = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '+'){
            cnt++;
        }
        else{
            cnt1++;
        }   
    }
    if(cnt == cnt1){
        for(int i = 0; i < q; i++){
            yes;
        }
        return;
    }
    for(int i = 0; i < q; i++){
        if(a[i] == b[i]){
            no;
            continue;
        }
        ll aa = a[i] * (cnt - cnt1);
        ll den = a[i] - b[i];
        if(aa % den == 0){
            ll k = aa / den;
            if(k >= -cnt1 && k <= cnt){
                yes;
            }
            else{
                no;
            }
        }
        else{
            no;
        }
    }

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