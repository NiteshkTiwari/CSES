#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int

using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> v;
    for (ll i = 0; i < n;i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    ll i = 0;
    ll j = n - 1;
    ll count = 0;
    while(i<=j)
    {

        if(v[i]+v[j]<=k)
        {
            i++;
            j--;
            count++;
        }
        
        else{
            j--;
            count++;
        }

    }

    cout << count << endl;
}