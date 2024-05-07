#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;

    cin >> n;

    if(n<=3)
    {
        if(n==1)
        {
            cout << 1 << " ";
           
        }

        else{
          cout << "NO SOLUTION";
        }
        
    }

    else{
        if(n%2==0){
            int i = 2;
        while(i<=n)
        {
            cout << i << " ";
            i = i + 2;
        }

        i = 1;

        while(i<=n-1)
        {
            cout << i << " ";
            i = i + 2;
        }
        
      }
        else{

        int i = 2;

        while( i <= n-1)
        {
            cout << i << " ";
            i = i + 2;
        }

        i = 1;

        while(i <= n)
        {
            cout << i << " ";
            i = i + 2;
        }

    }

    
    }

    
    
}