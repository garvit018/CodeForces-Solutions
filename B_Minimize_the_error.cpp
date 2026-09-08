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
    ll n, k1, k2;
    cin >> n >> k1 >> k2;
    vi arr(n), brr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> brr[i];
    }
    if(k1 == 0 && k2 == 0){
        ll sum = 0;
        for(int i = 0; i < n; i++){
            sum += (abs(arr[i] - brr[i]) * abs(arr[i] - brr[i]));
        }
        cout << sum << endl;
        return;
    }
    for(int i = 0; i < n; i++){
        ll x = (arr[i] + brr[i]) / 2;
        if(arr[i] != x){
            ll need = abs(arr[i] - x);
            if(k1 >= need){
                k1 -= need;
                arr[i] = x;
            }
            else{
                if(arr[i] > x){
                    arr[i] -= k1;
                }
                else{
                    arr[i] += k1;
                }
                k1 = 0;
            }
        }
        if(brr[i] != x){
            ll need = abs(brr[i] - x);
            if(k2 >= need){
                k2 -= need;
                brr[i] = x;
            }
            else{
                if(brr[i] > x){
                    brr[i] -= k2;
                }
                else{
                    brr[i] += k2;
                }
                k2 = 0;
            }
        }
    }
    if(k1 > 0){
        arr[0] += (k1 % 2);
    }
    if(k2 > 0){
        brr[0] += (k2 % 2);
    }
    ll sum = 0;
    for(int i = 0; i < n; i++){
        sum += (abs(arr[i] - brr[i]) * abs(arr[i] - brr[i]));
    }
    cout << sum << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt = 1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}