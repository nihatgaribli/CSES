#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin >> s;
    int l = s.length();
    char c = ' ';
    int n = 0, m = 0;

    for(int i = 0; i < l; i++)
    {
        if( s[i] == c)
        n++;
        else
        {
            if(n > m) m = n;
            c = s[i];
            n = 1;
        }
    }
    if(n > m ) m = n;
    cout << m;

    return 0;
}