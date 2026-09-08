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
    if(n % 12 <= 9){
        cout << n % 12 << ' ' << n - n % 12 << endl;
    }
    else if(n % 12 == 10){
        if(n == 10){
            cout << -1 << endl;
        }
        else{
            cout << 22 << " " << n - 22 << endl;
        }
    }
    else{
        if(n % 12 == 11){
            cout << 11 << " " << n - 11 << endl;
        }
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