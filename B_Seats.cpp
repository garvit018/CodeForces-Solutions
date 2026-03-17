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
void solve()
{
    ll n;
    string s;
    cin>>n>>s;
    ll cnt=0;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    ll fidx=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            fidx=i;
            break;
        }
    }
    ll lidx=-1;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1'){
            lidx=i;
            break;
        }
    }
    if(lidx==-1 and fidx==-1){
        cout<<(ll)ceil((double)n/3)<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            cnt++;
        }
    }
    cnt+=(fidx+1)/3;
    for(int i=fidx;i<lidx;){
        ll cnt0=0;
        if(s[i]=='1'){
            ll j=i+1;
            while(j<=lidx and s[j]=='0'){
                cnt0++;
                j++;
            }
            cnt+=cnt0/3;
            i=j;
        }
    }
    cnt+=(n-lidx)/3;
    cout<<cnt<<endl;
}
*/

void solve(){
    ll n;
    string s;
    cin>>n>>s;
    ll cnt=0;
    if(n<=2){
        cout<<1<<endl;
        return;
    }
    if(s[0]=='0' && s[1]=='0'){
        s[1]='1';
    }
    if(s[n-1]=='0' && s[n-2]=='0'){
        s[n-2]='1';
    }
    ll prev=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            if(i-prev>=3){
                cnt++;
                s[i]='1';
                prev=i;
            }
        }
        else{
            cnt++;
            prev=i;
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