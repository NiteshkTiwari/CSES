#include<iostream>

#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;

int main()
{
    ll n,k;
    cin >> n >> k;
    vector<pair<ll,ll>> v;
    
   

    for (ll i = 0; i < n;i++){
        ll a;
        cin >> a;
        v.push_back({a,i+1});
      }

      sort(v.begin(), v.end());
      ll left = 0;
      ll right = n - 1;

      while(left <right){
        if(v[left].first +v[right].first > k)
        {
            right--;
        }
       else if(v[left].first +v[right].first < k)
        {
            left++;
        }
        else{
            cout << v[left].second << " " << v[right].second << endl;
			return 0;
        }
      }

      cout << "IMPOSSIBLE" << endl;
}