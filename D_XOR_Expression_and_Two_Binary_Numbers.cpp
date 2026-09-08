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
a^b = c
b^c = a
c^a = b
a,-,c,-,b
a,b,c,a,b
*/

void solve()
{
    ll n, k;
    string s, z;
    cin >> n >> k >> s >> z;
    ll cnts1 = 0, cnts0 = 0, cnte1 = 0;
    ll cntz1 = 0, cntz0 = 0, cnte0 = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0'){
            cnts0++;
        }
        else{
            cnts1++;
        }
        if(z[i] == '0'){
            cntz0++;
        }
        else{
            cntz1++;
        }
        if(s[i] == z[i]){
            cnte0++;
        }
        else{
            cnte1++;
        }
    }
    ll a1 = cnts0 * cnts1;
    ll a2 = cntz0 * cntz1;
    ll a3 = cnte0 * cnte1;
    ll r = pow(2, k) + 1;
    ll rem = r % 3;
    ll a = r / 3;
    ll ans = (a1 + a2 + a3) * a;
    if(rem == 0){
        cout << ans << endl;
    }
    else{
        ans += (a1 + a2);
        cout << ans << endl;
    }
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