#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, i , x , S2, S1 = 0;
    cin >> n;

    S2 = (1+n)*n/2;

    for(i = 1; i < n; i++)
    {
        cin >> x;
        S1 += x;
    }
    cout << S2 - S1;

    return 0;
}