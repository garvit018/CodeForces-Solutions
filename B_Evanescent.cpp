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
    string s;
    cin >> n >> s;
    ll cnt = 0;
    for(int i = 0; i < n - 1; i++){
        if(s[i] != s[i + 1]){
            cnt++;
        }
    }    
    ll mini = 0;
    for(int i = 1; i < n - 1; i++){
        ll d = 0, al = 0;
        if(s[i] != s[i - 1]){
            d++;
        }
        if(s[i] != s[i + 1]){
            d++;
        }
        if(s[i - 1] != s[i + 1]){
            al++;
        }
        mini = min(mini, al - d);
    }
    cout << cnt + mini + 1 << endl;
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