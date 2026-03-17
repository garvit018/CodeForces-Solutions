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
+ and ^ have same effect on parity so 
if (number of odds are odds){
    if(alice and bob has same parity){
        impossible for alice to win (bob win)
    }
    if(start&1 == end&1){
        impossible for alice (bob wins)
    }
}

*/

void solve()
{
    ll n,x,y;
    cin >> n>>x>>y;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ll odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]&1){
            odd++;
        }
    }
    if(odd&1){
        if((x%2==(x+3)%2) || (x%2==y%2)){
            cout<<"Bob"<<endl;
            return;
        }
        else{
            cout<<"Alice"<<endl;
            return;
        }
    }
    else{
        if(x%2==y%2){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
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