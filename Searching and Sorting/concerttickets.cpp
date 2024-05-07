#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#define ll long long int

using namespace std;



int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> tp;
    vector<ll> cp;
    multiset<int> set;

    for (ll i = 0; i < n;i++)
    {
        ll a;
        cin >> a;
        tp.push_back(a);
        set.insert(a);
    }

    sort(tp.begin(), tp.end());

    for (ll i = 0; i < m;i++)
    {
        ll a;
        cin >> a;
        cp.push_back(a);

    }

    for (int i = 0; i < m;i++)
    {

        auto t = set.upper_bound(cp[i]);
        if(t==set.begin())
        {
            cout << "-1" << endl;
        }

        else{
            cout << *(--t) << endl;
            set.erase(t);
        }
    }
}