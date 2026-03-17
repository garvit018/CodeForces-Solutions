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
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    string s;
    cin>>s;
    if(s[0]=='1' or s[n-1]=='1'){
        cout<<-1<<endl;
        return;
    }
    ll mini=*min_element(all(arr));
    ll maxi=*max_element(all(arr));
    ll l=-1,r=-1;
    ll cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==mini){
            l=i+1;
        }
        if(arr[i]==maxi){
            r=i+1;
        }
        if(s[i]=='0'){
            cnt++;
        }
    }
    if(s[l-1]=='1' or s[r-1]=='1'){
        cout<<-1<<endl;
        return;
    }
    if(cnt==n){
        cout<<0<<endl;
        return;
    }
    if(l>r){
        swap(l,r);
    }
    cout<<5<<endl;
    cout<<l<<" "<<r<<endl;
    cout<<1<<" "<<l<<endl;
    cout<<1<<" "<<r<<endl;
    cout<<r<<" "<<n<<endl;
    cout<<l<<" "<<n<<endl;
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