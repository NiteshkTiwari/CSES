#include<iostream> 
#include<vector>
#include<string>

using namespace std;

#define ll long long int

int main()
{
    int t;
    cin >> t;

    vector<ll> power(19, 1);

    for (int i = 1; i < 19;i++)
    {
        power[i] = power[i - 1] * 10;
    }

    while(t--)
    {
        ll n;
        cin >> n;

        ll numDig = 0;  // size of Digit , i.e. whether 2 or 3 etc
        ll digitlen = 0; //Digit range (End)
        ll prevDiglen = 0; //Previous Digit end range 

        for (int i = 1; i < 19;i++)
        {
            digitlen += (power[i] - power[i - 1]) * i;

            if(digitlen>=n)
            {
                numDig = i;
                break;
            }

            prevDiglen = digitlen;
        }

        ll low = power[numDig - 1];
        ll high = power[numDig] - 1;
        ll startposans = 0;
        ll ans = 0;

        while(low<=high)
        {
            ll mid = (low + high) / 2;
            ll startpos = (mid - power[numDig - 1]) * numDig + prevDiglen + 1;

            if(startpos<=n)
            {
                if(mid> ans)
                {
                    ans = mid;
                    startposans = startpos;
                }

                low = mid + 1;
                
            }
            else{
                    high = mid - 1;
                }
        }

        string number = to_string(ans);
        cout << number[n - startposans] << endl;
    }
}