#include <bits/stdc++.h>

using namespace std;

vector<string> generateGrayCode(int n) 
{
    if (n == 0) return {""};
    if (n == 1) return {"0", "1"};

    vector<string> prevGray = generateGrayCode(n - 1);
    vector<string> result;

    // Birinci qrupu başına "0" əlavə edirik
    for (int i = 0; i < prevGray.size(); i++) {
        result.push_back("0" + prevGray[i]);
    }

    // İkinci qrupu başına "1" əlavə edirik
    for (int i = prevGray.size() - 1; i >= 0; i--) {
        result.push_back("1" + prevGray[i]);
    }

    return result;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<string> grayCode = generateGrayCode(n);

    for (string code : grayCode) {
        cout << code << endl;
    }

    return 0;
}