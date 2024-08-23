#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, int from_rod, int to_rod, int aux_rod)
{
    if (n == 0) 
    {
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << from_rod << " " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
    int N ;
    cin >> N;
    cout << pow(2,N) - 1 << endl;
    towerOfHanoi(N, 1, 3, 2);
    return 0;
}