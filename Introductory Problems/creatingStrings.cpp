#include<iostream>
#include<set>
#include<string>
#include<algorithm>

using namespace std;

void permutation(string s)
{
    sort(s.begin(), s.end());

    set<string> unique;
    do{
        unique.insert(s);
    } while (next_permutation(s.begin(), s.end()));

   cout << unique.size() << endl;
   for(auto string:unique)
   {
       cout << string << endl;
   }

}

int main()
{
    string s;
    cin >> s;

    permutation(s);
}