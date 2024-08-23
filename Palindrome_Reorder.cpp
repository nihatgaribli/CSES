#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); // author: nihatgaribli
    cin.tie(0);

    string s;
    cin >> s;

    sort(s.begin(), s.end());

    string left = "", right = "", middle = "";
    int n = s.size();

    for (int i = 0; i < n; i++) 
    {
        int count = 1;
        while (i < n - 1 && s[i] == s[i + 1]) 
        {
            count++;
            i++;
        }

        if (count % 2 == 1) 
        {
            if (middle != "") 
            {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
            middle = string(1, s[i]);
            count--;
        }

        left += string(count / 2, s[i]);
    }

    right = left;
    reverse(right.begin(), right.end());

    cout << left + middle + right << endl;

}