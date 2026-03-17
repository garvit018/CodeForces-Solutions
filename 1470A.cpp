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
chote k[i] ko c[k[i]] dedo and for larger k[i] give presents c[j] 
select kaise krenge?
start a pointer on c 
where c[pt]<=c[k[i]] -> inc. the pt
*/

void solve()
{
    ll n,m;
    cin>>n>>m;
    vi k(n),c(m);
    for (int i = 0; i < n; i++)
    {
        cin>>k[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>c[i];
    }
    sort(all(k));
    ll pt=0;
    ll ans=0;
    for (int i = n-1; i >= 0; i--)
    {
        if(pt<m and c[pt]<=c[k[i]-1]){
            ans+=c[pt];
            pt++;
        }
        else{
            ans+=c[k[i]-1];
        }
    }
    cout<<ans<<endl;
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