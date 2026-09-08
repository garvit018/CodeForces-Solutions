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
int MOD = 1e9 + 7;

bool isPalindrome(ll n){
    string s = to_string(n);
    ll m = s.size();
    for(int i = 0; i < m / 2; i++){
        if(s[i] != s[m - i - 1]){
            return false;
        }
    }
    return true;
}
vi arr, dp(4e4 + 1, 0);
void h(){
    for(int i = 1; i < 4e4 + 1; i++){
        if(isPalindrome(i)){
            arr.pb(i);
        }
    }
    dp[0] = 1;
    ll n = arr.size();
    for(int i = 0; i < n; i++){
        for(int j = 1; j < 4e4 + 1; j++){
            if(j - arr[i] >= 0){
                dp[j] = (dp[j] + dp[j - arr[i]]) % MOD;
            }
        }
    }
}
void solve()
{
    ll n;
    cin >> n;
    cout << dp[n] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    h();
    ll tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}