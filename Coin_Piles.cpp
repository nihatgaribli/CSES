#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> input(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> input[i].first >> input[i].second;
    }

    for (int i = 0; i < n; i++)
    {
        if ((2 * input[i].first - input[i].second) % 3 || (2 * input[i].first - input[i].second) < 0 || (2 * input[i].second - input[i].first) % 3 || (2 * input[i].second - input[i].first) < 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}