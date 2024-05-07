#include <iostream>
#include<set>
#include <vector>
#define ll long long int

using namespace std;

int main() {
    ll n;
    cin >> n;
    vector<ll> v;
    set<ll> useset;

    for (ll i = 0; i < n; i++) {
        ll a;
        cin >> a;
        v.push_back(a);
        useset.insert(a);
    }

    cout << useset.size() << endl;
}
