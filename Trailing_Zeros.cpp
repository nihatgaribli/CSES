#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int count = 0;
    int power_of_five = 5;
    while (n >= power_of_five) {
        count += n / power_of_five;
        power_of_five *= 5;
    }
    
    cout << count << endl;
    return 0;
}
