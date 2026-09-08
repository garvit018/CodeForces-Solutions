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
    ll cnt0 = 0, cnt1 = 0;
    // for(int i = 0; i < k; i++){
    //     bool one = false, zero = false;
    //     for(int j = i; j < n; j += k){
    //         if(s[j] == '0'){
    //             zero = true;
    //         }
    //         else if(s[j] == '1'){
    //             one = true;
    //         }
    //     }
    //     if(one && zero){ // agar s[i] and s[i + k] pr alag letters hai toh false 
    //                      // jo letter eliminate hoga whi add hona chahiye tbhi harr substring mai 
    //                      // equal '0' and '1'
    //         no;
    //         return;
    //     }
    //     if(one){
    //         cnt1++;
    //     }
    //     if(zero){
    //         cnt0++;
    //     }
    // }
    bool ok = true;
    for(int i = 0; i < k; i++){
        for(int j = i + k; j < n; j += k){
            if(s[i] == '?'){
                s[i] = s[j];
            }
            else if(s[j] != '?' && s[i] != s[j]){
                ok = false;
                break;
            }
            s[j] = s[i];
        }
    }
    for(int i = 0; i < k; i++){
        if(s[i] == '1'){
            cnt1++;
        }
        else if(s[i] == '0'){
            cnt0++;
        }
    }
    if((cnt0 > k / 2 || cnt1 > k / 2) || (!ok)){
        no;
        return;
    }
    yes;
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