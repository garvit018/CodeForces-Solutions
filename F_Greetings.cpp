#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

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
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

/*
1 range ke andar koi dusri poori range aa jae -> then its a greeting

ordered_set st
st.order_of_key(x) -> how many values < x  (O(logn))
st.find_key_order(x) -> value at index x   (O(logn))


we have to find how many ending points greater than x 
so total size - st.order_of_key(x)

kyuki apan ne arr ke basis pr sort kra hai so for that particualar ranges ,previous ranges ki ending value zyada honi chahiye particular range se 
*/

void solve()
{
    ll n;
    cin >> n;
    vi arr(n), brr(n);
    vpi pp;
    for(int i = 0; i < n; i++){
        cin >> arr[i] >> brr[i];
        pp.pb({arr[i], brr[i]});
    }
    sort(all(pp));
    ll cnt = 0;
    ordered_set st;
    for(int i = 0; i < n; i++){
        cnt += i - st.order_of_key(pp[i].second); 
        // basically idhar i is set size kyuki harr iteration pr i add ho rha set mai 
        st.insert(pp[i].second);
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