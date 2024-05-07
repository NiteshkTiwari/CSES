#include<iostream>
#include<string>
#include<vector>

using namespace std;
vector<string> gray(int n)
{
    vector<string> res;
    if(n==1)
    {
        res.push_back("0");
        res.push_back("1");
        return res;
    }

    vector<string> prev = gray(n - 1);

    for (int i = 0; i < prev.size();i++)
    {
        res.push_back("0" + prev[i]);
    }

    for (int i = prev.size() - 1; i >= 0;i--)
    {
        res.push_back("1" + prev[i]);
    }

    return res;
}
int main()
{
    int n;
    cin >> n;
    vector<string> out = gray(n);

    for (int i = 0; i < out.size();i++)
    {
        cout << out[i] << endl;
    }
}