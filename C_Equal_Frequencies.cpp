#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define pi pair<ll,ll>
#define mapii map<ll, ll>
#define vpi vector<pair<ll,char>>
#define endl '\n'
#define pb push_back
#define rall(x) x.rbegin(), x.rend()
#define yes cout << "YES\n";
#define no cout << "NO\n";

/*
bhaari help ke baad 
*/

void solve()
{
    ll n;
    string s;
    cin >> n >> s;
    vpi freq(26);
    for(int i = 0; i < 26; i++){
        freq[i].second = 'a' + i;
    }
    for(int i = 0; i < n; i++){
        freq[s[i] - 'a'].first++;
    }
    sort(rall(freq));
    ll K = -1;
    ll t = n;
    for(int k = 1; k <= 26; k++){
        if(n % k != 0){
            continue;
        }
        ll un = 0;
        for(int j = 0; j < k; j++){
            un += min(freq[j].first, n / k);
        }
        if(n - un < t){
            t = n - un;
            K = k;
        }
    }
    cout << t << endl;
    map<char, int> mp;
    for(int i = 0; i < K; i++){
        mp[freq[i].second] = n / K;
    }
    string ans(n, ' ');
    vi idx;
    for(int i = 0; i < n; i++){
        if(mp[s[i]]){
            ans[i] = s[i];
            mp[s[i]]--;
        }
        else{
            idx.pb(i);
        }
    }
    ll i = 0;
    for(auto it : mp){
        while(it.second > 0){
            ans[idx[i]] = it.first;
            i++;
            it.second--;
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