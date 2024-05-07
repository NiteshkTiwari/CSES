#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long int> v;

    for (int i = 0; i < n;i++)
    {
       long long  int a;
        cin >> a;
        v.push_back(a);
    }

  long long int count = 0;

    for (int i = 1; i < n;i++)
    {
        long long int ele = v[i] - v[i - 1];

        if(ele <0)
        {
            v[i] = v[i - 1];
            count += abs(ele);
        }
    }

    cout << count;
}