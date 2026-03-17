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

constexpr int INF = 1e9;
constexpr ll INFLL = 1e18;
constexpr int MOD = 1e9 + 7;

/*

*/

void solve()
{
    ll n;
    string s;
    cin >> n >> s;
    ll mini = 0, maxi = 0;
    for(int i = 1; i < n - 1; i++){
        if(s[i - 1] == '1' && s[i + 1] == '1'){
            s[i] = '1';
        }
    }
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            maxi++;
        }
    }
    for(int i = 1; i < n - 1; i++){
        if(s[i - 1] == '1' && s[i + 1] == '1'){
            s[i] = '0';
        }
    }
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            mini++;
        }
    }
    cout << mini << " " << maxi << endl;
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