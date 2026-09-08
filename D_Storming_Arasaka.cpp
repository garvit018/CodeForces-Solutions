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
const ll N = 1e6 + 5;
vi fac[N];
void factors(){
    for(int i = 2; i < N; i++){
        if(fac[i].empty()){
            for(int j = i; j < N; j += i){
                fac[j].pb(i);
            }
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0, dis = 0;
    for(auto it : fac[n]){
        if(fac[it].size() == 1){
            ll cnt = 0;
            while(n % it == 0){
                n /= it;
                cnt++;
            }
            ans += cnt;
            dis++;
        }
    }
    ans += (dis - 1);
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    factors();
    ll tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}