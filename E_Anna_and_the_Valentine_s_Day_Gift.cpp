#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define vs vector<string>
#define mapii map<ll, ll>
#define vpi vector<pair<ll,ll>>
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()
#define yes cout << "YES\n";
#define no cout << "NO\n";

constexpr int INF = 1e9;
constexpr ll INFLL = 1e18;
constexpr int MOD = 1e9 + 7;

/*
3 5
9 56 1

956 1
569 1

9561 < 10^5
1956 < 10^5

5691 < 10^5
1569 < 10^5

Anna wins
*/

void solve()
{
    ll n,m;
    cin>>n>>m;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ll cnt=0;
    vi res;
    for(int i=0;i<n;i++){
        ll z=0;
        cnt+=to_string(arr[i]).size();
        while(arr[i]%10==0){
            z++;
            arr[i]/=10;
        }
        res.pb(z);
    }
    sort(res.rbegin(),res.rend());
    ll s=0;
    for(int i=0;i<n;i+=2){
        s+=res[i];
    }
    if(cnt-s>m){
        cout<<"Sasha"<<endl;
    }
    else{
        cout<<"Anna"<<endl;
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