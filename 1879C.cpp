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
const int MODD=998244353;
ll fact(ll n){
    ll pro=1;
    for(int i=1;i<=n;i++){
        pro=(pro*i)%MODD;
    }
    return pro;
}

void solve()
{
    string s;
    cin>>s;
    ll n=s.size();
    ll cnt=0;
    ll way=1;
    ll con=1;
    for (int i = 0; i < n-1; i++)
    {
        if(s[i]==s[i+1]){
            cnt++;
            con++;
        }
        else{
            way=(way*con)%MODD;
            con=1;
        }
    }
    way=((way%MODD)*(fact(cnt)%MODD*(con%MODD)%MODD))%MODD;
    cout<<cnt<<" "<<way<<endl;
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