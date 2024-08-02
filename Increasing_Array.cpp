#include <bits/stdc++.h>
using namespace std;

#define MAX 200001
long long arr[MAX];

int main()
{
    long long n, i, k = 0, l;
    cin >> n;
    
    for(i =0 ; i < n ; i++)
        cin >> arr[i];

    for(i = 0; i < n-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            l = arr[i] - arr[i+1];
            arr[i+1] += l;
            k += l;
        }
    }
    cout << k;
    return 0;
}