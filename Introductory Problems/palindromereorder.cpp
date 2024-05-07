#include<iostream>
#include<string>

using namespace std;

int main()
{

    string s;
    cin >> s;
    int n = s.size();
    string ans(n,' ');

    int freq[26] = {};

    for (int i = 0; i < n;i++)
    {
        freq[s[i] - 'A'] += 1;
    }

    int count = 0;

    for (int i = 0; i < 26;i++)
    {
       if(freq[i]%2!=0)
       {
           count++;
       }
    }

    if(count>1)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    int r = 0;
    int l = n - 1;
    for (int i = 0; i < 26; i++) {
    while (freq[i] > 1) {
        ans[l++] = ans[r--] = i + 'A';
        freq[i] -= 2;
    }
}
for (int i = 0; i < 26; i++) {
    if (freq[i] == 1) {
        ans[n / 2] = i + 'A';
        break;
    }
}

    cout << ans << endl;
}