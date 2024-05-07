#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool sortfnc(pair<long long int,long long int> &p1,pair<long long int,long long int> &p2)
{
    return p1.second < p2.second;
}

int main() {
    long long int n;
    cin >> n;
    vector<pair<long long int, long long int>> v;

    for (long long int i = 0; i < n; i++) {
        long long int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    long long int ans = 0;
    long long int last_end_time = 0;
    
    sort(v.begin(), v.end(),sortfnc);

    for (long long int i = 0; i < n; i++) {
        if (v[i].first >= last_end_time) {
            ans++;
            last_end_time = v[i].second;
        }
    }

    cout << ans << endl;
}
