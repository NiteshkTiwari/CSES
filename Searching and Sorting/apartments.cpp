#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>


#define ll long long int 

using namespace std;

int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> applicants;
    vector<ll> apartments;

    for (ll i = 0; i < n;i++)
    {
        ll a;
        cin >> a;
        applicants.push_back(a);
    }

    sort(applicants.begin(), applicants.end());

    for (ll i = 0; i < m;i++)
    {
        ll a;
        cin >> a;
        apartments.push_back(a);
    }

    sort(apartments.begin(), apartments.end());

    
    ll count = 0;
    ll i, j;
    i = 0;
    j = 0;
    while(i<n&&j<m)
    {
        if(abs(applicants[i]-apartments[j])<=k)
        {
            i++;
            j++;
            count++;
        }

        else if(applicants[i]<apartments[j])
        {
            i++;
        }

        else{
            j++;
        }
    }

    cout << count << endl;
}