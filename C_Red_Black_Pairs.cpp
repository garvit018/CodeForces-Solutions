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
    string a, b;
    cin >> n >> a >> b;
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == b[i]){
            continue;
        }
        else if(a[i] == a[i + 1]){
            if(b[i] != b[i + 1]){
                cnt++;
            }
            i++;
        }
        else if(b[i] == b[i + 1]){
            if(a[i] != a[i + 1]){
                cnt++;
            }
            i++;
        }
        else{
            cnt++;
        }
    }
    cout << cnt << endl;
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