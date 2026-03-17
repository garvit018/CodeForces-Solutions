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

bool isPalind(string s){
    ll n=s.size();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            return false;
        }
    }
    return true;
}

void solve()
{
    string s;
    cin>>s;
    ll n=s.size();
    string ans="";
    // ans+=s[0];
    // ll l=0;
    ll maxi=0;
    for(int i=0;i<n;i++){
        string temp="";
        for(int j=i;j<n;j++){
            temp+=s[j];
            if(!isPalind(temp)){
                maxi=max(maxi,(ll)temp.size());
            }
        }
    }
    cout<<maxi<<endl;
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