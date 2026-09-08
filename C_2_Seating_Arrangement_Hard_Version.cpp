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
    ll n, x, s;
    string u;
    cin >> n >> x >> s >> u;
    // vvi dp(n + 1, vi(x + 1, -1e9));
    // vi dp(x + 1, -1e9); // no of people seated if x tables are used
    // dp[0] = 0;
    // for(int i = 0; i < n; i++){
    //     for(int j = x; j >= 0; j--){
    //         if(u[i] == 'E' || u[i] == 'A'){
    //             if(dp[j] < j * s){
    //                 dp[j] += 1;
    //             }
    //         }
    //         if((u[i] == 'I' || u[i] == 'A') && j > 0){
    //             dp[j] = max(dp[j], dp[j - 1] + 1);
    //         }
    //     }
    // }
    // cout << *max_element(all(dp)) << endl;

    ll seats = 0;
    ll empty_tab = x;
    ll A = 0, ans = 0;
    for(int i = 0; i < n; i++){
        if(u[i] == 'E'){
            if(seats > 0){
                seats--;
                ans++;
            }
            else if(A > 0 && empty_tab > 0){
                empty_tab--;
                A--;
                ans++;
                seats += (s - 1);
            }
        }
        else if(u[i] == 'I'){
            if(empty_tab > 0){
                seats += (s - 1);
                ans++;
                empty_tab--;
            }
        }
        else{
            if(seats == 0){
                if(empty_tab > 0){
                    empty_tab--;
                    seats += (s - 1);
                    ans++;
                }
            }
            else{
                A++;
                seats--;
                ans++;
            }
        }
    }
    cout << ans << endl;
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