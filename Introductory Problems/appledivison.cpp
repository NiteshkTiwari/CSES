#include<iostream>
#include<vector>
#include<cmath>
#define ll long long int

using namespace std;

ll difference(int i,ll* v,ll sum1, ll sum2,ll n)
{
    if(i==n)
    {
        return abs(sum1 - sum2);
    }

    ll first = difference(i + 1, v, sum1 + v[i], sum2, n);
    ll second = difference(i + 1, v, sum1, sum2 + v[i], n);

    return min(first, second);
}

int main()
{
    ll n;
    cin >> n;
    ll arr[n];

    for (ll i = 0; i < n;i++)
    {
        cin >> arr[i];
    }

    cout << difference(0,arr,0,0,n) << endl;
}