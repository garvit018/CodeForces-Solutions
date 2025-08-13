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

ll modulo(string s, int m) //GFG
{
    int ans = 0;
    int power = 1;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == '1') {
            ans += power;
            ans %= m;
        }
        power *= 2;
        power %= m;
    }
    return ans;
}

void solve()
{
    string s;
    ll k;
    cin>>s>>k;
    ll cnt=0;
    ll num=modulo(s,k);
    while(1){
        if(num==0){
            cout<<cnt<<endl;
            cout<<s<<endl;
            return;
        }
        else if((num*2)%k==0){ //0
            s+="0";
            cnt++;
            num=(num*2)%k;
            continue;
        }
        else if((num*2 +1)%k==0){ //1
            s+="1";
            cnt++;
            num=(num*2 +1)%k;
            continue;
        }
        if(k%5==0){
            s+="0";
            num=(num*2)%k;
            // cnt++;
            // continue;
        }
        else{
            s+="1";
            num=(num*2 +1)%k;
            // cnt++;
            // continue;
        }
        cnt++;
    }
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