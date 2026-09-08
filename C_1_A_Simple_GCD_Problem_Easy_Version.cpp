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
we have to check adj ele rather than focusing on whole subarray cuz if adj is not true than whole subarray will also be not true 

so just check adj ele i-1,i,i+1 and find the lowest number which have both factors 
suppose gcd(arr[i-1],arr[i]) = 2*3*3
and gcd(arr[i+1],arr[i]) = 2*2*3 
so the a'[i] will be set to the number having both factors -> LCM of these gcd

m = lcm(gcd(arr[i-1],arr[i]),gcd(arr[i],arr[i+1]))
if(arr[i]!=m) then cnt++
otherwise dont change 
*/

void solve()
{
    ll n;
    cin >> n;
    vi arr(n), brr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> brr[i];
    }
    ll cnt = 0;
    if(gcd(arr[0], arr[1]) != arr[0]){
        cnt++;
    }
    if(gcd(arr[n - 2], arr[n - 1]) != arr[n - 1]){
        cnt++;
    }
    for(int i = 1; i < n - 1; i++){
        if(lcm(gcd(arr[i], arr[i - 1]), gcd(arr[i], arr[i + 1])) != arr[i]){
            cnt++;
        }
    }
    cout << cnt << endl;
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