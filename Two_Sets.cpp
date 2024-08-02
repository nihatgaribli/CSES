#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if( n % 4 == 0)
    {
        cout <<"YES" <<"\n" << n/2<<"\n";
        for(int i = 1; i <= (n/2)/2; i++)
        {
            cout << i <<" ";
        }
        for(int i = n-(n/2)/2+1; i <= n; i++)
        {
            cout << i <<" ";
        }

        cout <<"\n" << n/2 << "\n" ;

        for(int i = (n/2)/2+1; i < n-(n/2)/2+1; i++)
        {
            cout << i << " " ;
        }
    }

    else if( (n+1)%4 == 0 )
    {
        cout <<"YES" <<"\n" << n/2+1<<"\n" << 1 <<" "<< 2 ;
        for(int i = 4; i < 3+(n/2+1)/2; i++)
        {
            cout <<" " << i;
        }
        for(int i = n-(n/2+1)/2+2; i <= n; i++)
        {
            cout <<" " << i  ;
        }

        cout <<"\n" << n - n/2 - 1 << "\n" << 3;

        for(int i = 3+(n/2+1)/2; i <= n-(n/2+1)/2+1; i++)
        {
            cout << " " << i ;
        }
    }

    else
    {
        cout <<"NO";
    }
}