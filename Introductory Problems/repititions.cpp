#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char c = s[0];
    int ans = 1;
    int max_ans = 1;
    for (int i = 1; i < s.size();i++)
    {

        if(c==s[i])
        {
            ans++;
        }
        else{
            c = s[i];
            ans = 1;
        }

        max_ans = max(ans, max_ans);
    }

    cout << max_ans << endl;
}