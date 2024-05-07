#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long int sum = (n * 1LL * (n + 1)) / 2; // Use 1LL to ensure long long int arithmetic
    vector<int> s1, s2;

    if (sum % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    
    long long int half_sum = sum / 2;
    long long int current_sum = 0;

    for (int i = n; i >= 1; i--) {
        if (current_sum + i <= half_sum) {
            s1.push_back(i);
            current_sum += i;
        } else {
            s2.push_back(i);
        }
    }

    cout << s1.size() << endl;
    for (int x : s1) {
        cout << x << " ";
    }
    cout << endl;

    cout << s2.size() << endl;
    for (int x : s2) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
