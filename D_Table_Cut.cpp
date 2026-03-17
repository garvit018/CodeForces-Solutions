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

constexpr int INF = 1e9;
constexpr ll INFLL = 1e18;
constexpr int MOD = 1e9 + 7;

/*

*/

void solve()
{
    ll n,m;
    cin>>n>>m;
    vvi arr(n,vi(m));
    ll cnt=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1){
                cnt++;
            }
        }
    }
    ll ans=0;
    if(cnt&1){
        ans=(cnt/2 +1)*(cnt/2);
    }
    else{
        ans=(cnt/2)*(cnt/2);
    }
    cout<<ans<<endl;
    if(ans==0){
        for(int i=0;i<n;i++){
            cout<<'D';
        }
        for(int i=0;i<m;i++){
            cout<<'R';
        }
        cout<<endl;
        return;
    }
    ll sum=0;
    for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--){
            sum+=arr[i][j];
            if(sum==(cnt/2)){
                for (int x = 0; x < i; x++)
                {
                    cout<<'D';
                }
                for (int y = 0; y < j; y++)
                {
                    cout<<'R';
                }
                cout<<'D';
                for (int y = j; y < m; y++)
                {
                    cout<<'R';
                }
                for (int x = i+1; x < n; x++)
                {
                    cout<<'D';
                }
                cout<<endl;
                return;
            }
        }
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