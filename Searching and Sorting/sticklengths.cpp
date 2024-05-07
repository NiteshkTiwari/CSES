#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long int

using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for (ll i = 0; i < n;i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());
    ll mid = n / 2;
    ll mid_ele = v[mid];
    ll ans = 0;
    for (ll i = 0; i < n;i++)
    {
        ans += abs(v[i] - mid_ele);
    }

    cout << ans << endl;
}