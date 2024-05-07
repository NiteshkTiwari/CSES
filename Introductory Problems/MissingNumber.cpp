#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    unordered_map<long long int,long long int> map;
    for (int i = 1; i <n;i++)
    {
        int value;
        cin >> value;
        map[value] = value;
    }

    for (int i = 1; i <= n;i++)
    {
        if(map.count(i)==0)
        {
            cout << i << endl;
            break;
        }
    }
}