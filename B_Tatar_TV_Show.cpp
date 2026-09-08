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
    ll n, k;
    string s;
    cin >> n >> k >> s;
    for(int i = 0; i < k; i++){
        ll cnt = 0;
        for(int j = i; j < n; j += k){
            if(s[j] == '1'){
                cnt++;
            }
        }
        if(cnt & 1){
            no;
            return;
        }
    }
    yes    
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