#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n > 0) {
        if (n % 2 == 0)
            cout << "Positive Even";
        else
            cout << "Positive Odd";
    }
    else if (n < 0) {
        if (n % 2 == 0)
            cout << "Negative Even";
        else
            cout << "Negative Odd";
    }
    else {
        cout << "Zero";
    }

    return 0;
}