#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;

    set<string> permutation;


    sort(str.begin(), str.end());

    do
    {
        permutation.insert(str);
    } while (next_permutation(str.begin(),str.end())) ;

    cout << permutation.size() << endl;

    for(const auto& str : permutation)
    {
        cout << str << endl;
    }
      
}