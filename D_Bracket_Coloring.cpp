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
    string s;
    cin>>n>>s;
    ll cnt=0,cnt1=0;
    vi pref(n);
    if(s[0]=='('){
        pref[0]=1;
        cnt++;
    }
    else{
        cnt1++;
        pref[0]=-1;
    }
    for (int i = 1; i < n; i++)
    {
        if(s[i]=='('){
            cnt++;
            pref[i]=pref[i-1]+1;
        }
        else{
            cnt1++;
            pref[i]=pref[i-1]-1;
        }
    }
    if(cnt!=cnt1){
        cout<<-1<<endl;
        return;
    }
    ll mini=*min_element(all(pref));
    ll maxi=*max_element(all(pref));
    if(mini==0 or maxi==0){
        cout<<1<<endl;
        for(int i=0;i<n;i++){
            cout<<1<<" ";
        }
        cout<<endl;
        return;
    }
    vi ans(n,0);
    cout<<2<<endl;
    for(int i=0;i<n;i++){
        if(pref[i]<0){
            ans[i]=1;
        }
        else if(pref[i]>0){
            ans[i]=2;
        }
        else{
            if(i>0 and pref[i-1]>0){
                ans[i]=2;
            }
            else{
                ans[i]=1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << ' ';
    }
    cout << endl;
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