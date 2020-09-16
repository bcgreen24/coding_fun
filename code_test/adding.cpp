#include <iostream>

using namespace std;

int main() {
    unsigned long long sum = 0, val1 = 0, val2 = 0;
    cout << "Enter a lower and upper range: " << endl;
    cin >> val1 >> val2;

    for (unsigned long long i = 0; i <= (val2 - val1); i++) {
        sum += val1 + i;
    }
    cout << "Sum of the range " << val1 << " to " << val2 << " is " << sum << endl;
    return 0;
}
