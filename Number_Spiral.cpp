#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<pair<int, int>> tests(t);
    for (int i = 0; i < t; ++i)
    {
        cin >> tests[i].first >> tests[i].second;
    }

    for (const auto &test : tests)
    {
        int y = test.first;
        int x = test.second;
        long long result;

        if (x >= y)
        {
            if (x % 2 == 1)
            {
                result = x * x - (y - 1);
            }
            else
            {
                result = (x - 1) * (x - 1) + y;
            }
        }
        else
        {
            if (y % 2 == 0)
            {
                result = y * y - (x - 1);
            }
            else
            {
                result = (y - 1) * (y - 1) + x;
            }
        }

        cout << result << endl;
    }
    return 0;
}
