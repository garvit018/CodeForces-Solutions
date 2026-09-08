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
1 7 6 5

6 + 2^(1-1), x = 1
5 + 2^(2-1), x = 2
*/

vi p;

void powOfTwo(ll n = 40){
    ll pro = 1;
    ll i = 0;
    while(i < n){
        p.pb(pro);
        pro *= 2;
        i++;
    }
}

void solve()
{
    ll n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if(is_sorted(all(arr))){
        cout << 0 << endl;
        return;
    }
    vi pref(n, 0);
    pref[0] = arr[0];
    for(int i = 1; i < n; i++){
        pref[i] = max(pref[i - 1], arr[i]);
    }
    powOfTwo();
    ll dif = INT_MIN;
    for(int i = 0; i < n; i++){
        dif = max(dif, pref[i] - arr[i]);
    }
    ll cnt = 0;
    // cout << "dif " << dif << endl;
    for(int i = 0; i < p.size(); i++){
        cnt++;
        if(p[i] > dif){
            break;
        }
    }
    cout << cnt - 1 << endl;    
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