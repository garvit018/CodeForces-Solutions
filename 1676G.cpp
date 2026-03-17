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

*/

void solve()
{
    ll n;
    cin>>n;
    string s;
    vi arr(n);
    for (int i = 1; i < n; i++) {
        cin>>arr[i];
        arr[i]--;
    }
    cin>>s;
    vi brr(n);
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='B'){
            brr[i]=1;
        }
        else{
            brr[i]=-1;
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<brr[i]<<" ";
    // }
    // cout<<endl;
    for (int i = n-1; i > 0; i--)
    {
        brr[arr[i]]+=brr[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<brr[i]<<' ';
    // }
    ll cnt=0;
    for (int i = 0; i < n; i++)
    {
        if(brr[i]==0){
            cnt++;
        }
    }
    cout<<cnt<<endl;
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


