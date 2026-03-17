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
    ll n,k;
    cin>>n>>k;
    vector<string>s(k);
    for (int i = 0; i < k; i++)
    {
        cin>>s[i];
    }
    vector<set<char>>vp(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            vp[i].insert(s[j][i]);
        }
    }
    // for(int i=0;i<n;i++){
    //     for(auto it:vp[i]){
    //         cout<<it<<" ";
    //     }
    // }
    // cout<<endl;
    for(int i=1;i<=n;i++){
        if(n%i!=0){
            continue;
        }
        string ans="";
        bool ok=true;
        for (int j = 0; j < i; j++)
        {
            set<char>st=vp[j];
            for (int k = i+j; k < n; k+=i)
            {
                set<char>temp;
                for(auto it:st){
                    if(vp[k].count(it)){
                        temp.insert(it);
                    }
                }
                st=temp;
            }           
            if(st.empty()){
                ok=false;
                break;
            } 
            ans+=*st.begin();
        }
        if(ok){
            for(int j=0;j<n/i;j++){
                cout<<ans;
            }
            cout<<endl;
            return;
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