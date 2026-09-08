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
vi arr(30, 0);
void precomp(){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            for(int k = 0; k < 10; k++){
                arr[i + j + k]++;
            }
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    ll ans = 1;
    while(n > 0){
        ans *= arr[n % 10];
        n /= 10;
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt = 1;
    cin >> tt;
    precomp();
    while (tt--) {
        solve();
    }
    return 0;
}