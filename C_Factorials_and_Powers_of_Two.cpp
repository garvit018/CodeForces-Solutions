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
vi fac(16, 1);
void solve()
{
    ll n;
    cin >> n;
    vi s;
    for(int i = 0; i < 16; i++){
        s.pb(fac[i]);
    }
    ll ans = LLONG_MAX;
    for(int i = 0; i < (1 << 16); i++){ 
        ll sum = 0;
        ll cnt = 0;
        for(int j = 0; j < 16; j++){
            if(i & (1 << j)){
                sum += s[j];
                cnt++;
            }
        }
        if(sum > n){
            continue;
        }
        cnt += __builtin_popcountll(n - sum);
        ans = min(cnt, ans);
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt = 1;
    cin >> tt;
    for(int i = 1; i < 16; i++){
        fac[i] = fac[i - 1] * i;
    }
    while (tt--) {
        solve();
    }
    return 0;
}