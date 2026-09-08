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

/*

*/

void solve()
{
    ll n, m;
    cin >> n >> m;
    set<char> st, tt;
    while(n--){
        string s;
        cin >> s;
        st.insert(s[0]);        
    }
    while(m--){
        string t;
        cin >> t;
        for(int i = 0; i < t.size(); i++){
            tt.insert(tolower(t[i]));
        }
    }
    for(auto it : tt){
        if(st.find(it) == st.end()){
            no;
            return;
        }
    }
    yes;
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