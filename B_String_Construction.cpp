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
    cin >> n >> k;
    if(k == n - 1){
        cout << -1 << endl;
        return;
    }
    char c = '1';
    ll cnt0 = n / 2;
    ll cnt1 = n - cnt0;
    for(int i = 0; i < n - k - 1; i++){
        cout << c;
        if(c == '1'){
            c = '0';
            cnt1--;
        }
        else{
            c = '1';
            cnt0--;
        }
    }
    if(c == '0'){
        while(cnt1 > 0){
            cout << '1';
            cnt1--;
        }
        while(cnt0 > 0){
            cout << '0';
            cnt0--;
        }
    }
    else{
        while(cnt0 > 0){
            cout << '0';
            cnt0--;
        }
        while(cnt1 > 0){
            cout << '1';
            cnt1--;
        }
    }
    cout << endl;
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