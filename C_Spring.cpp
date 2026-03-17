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
alone - 2 - 2 + all 3 (inc-exc)
*/

ll gcd(ll a, ll b){
    if (b == 0){
        return a;
    }
    return gcd(b, a % b);
}

ll lcm(ll a, ll b){
    return (a / gcd(a, b)) * b;
}

void solve()
{
    ll a, b, c, m;
    cin >> a >> b >> c >> m;
    ll ab = lcm(a, b);
    ll bc = lcm(b, c);
    ll ca = lcm(c, a);
    ll abc = lcm(a, bc);

    ll a_b = m / ab;
    ll b_c = m / bc;
    ll c_a = m / ca;
    ll a_bc = m / abc;

    ll A = 6LL * (m / a) - 3 * a_b - 3 * c_a + 2 * a_bc;
    ll B = 6LL * (m / b) - 3 * b_c - 3 * a_b + 2 * a_bc;
    ll C = 6LL * (m / c) - 3 * b_c - 3 * c_a + 2 * a_bc;
    cout << A << " " << B << " " << C << endl;
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