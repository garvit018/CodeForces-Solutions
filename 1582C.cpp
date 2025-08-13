#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define vs vector<string>
#define umapii unordered_map<int, int>
#define vpi vector<pair<int,int>>
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";

constexpr int INF = 1e9;
constexpr ll INFLL = 1e18;
constexpr int MOD = 1e9 + 7;

// bool isPrime(ll n) {
//     if (n < 2) return false;
//     if (n < 4) return true;
//     if (n % 2 == 0 || n % 3 == 0) return false;
//     for (ll i = 5; i * i <= n; i += 6) {
//         if (n % i == 0 || n % (i + 2) == 0) return false;
//     }
//     return true;
// }

// ll gcd(ll a, ll b) {
//     return b == 0 ? a : gcd(b, a % b);
// }

// ll lcm(ll a, ll b) {
//     return (a / gcd(a, b)) * b;
// }

/*

*/
bool isPalindrome(string s){
    ll n=s.size();
    for (int i = 0; i < n/2; i++)
    {
        if(s[i]!=s[n-i-1]){
            return false;
        }
    }
    return true;
}

void solve()
{
    ll n;
    string s;
    cin>>n>>s;
    if(isPalindrome(s)){
        cout<<0<<endl;
        return;
    }
    auto cnt=[&](char c)->ll{
        ll l=0,r=n-1,cnt=0;
        while(l<=r){
            if(s[l]==s[r]){
                l++;
                r--;
            }
            else if(s[l]==c){
                l++;
                cnt++;
            }
            else if(s[r]==c){
                r--;
                cnt++;
            }
            else{
                return INT_MAX;
            }
        }
        return cnt;
    };
    ll i=0;
    ll ans=INT_MAX;
    for (ll i = 0; i < 26; i++)
    {
        ans=min(cnt('a'+i),ans);
    }

    if(ans==INT_MAX){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
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