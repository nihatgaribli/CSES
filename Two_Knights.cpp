#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int k = 1; k <= n; ++k)
    {
        long long totalWays = (long long) k * k * (k * k - 1) / 2;
        long long attackingPairs = 4 * (k - 1) * (k - 2);
        long long nonAttackingPairs = totalWays - attackingPairs;
        cout << nonAttackingPairs << "\n";
    }

    return 0;
}
