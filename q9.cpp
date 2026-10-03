#include <iostream>
using namespace std;

int main() {
    int choice, n;

    do {
        cout << "\n\n===== MENU =====" << endl;
        cout << "1. Factorial" << endl;
        cout << "2. Prime Number Check" << endl;
        cout << "3. Armstrong Number Check" << endl;
        cout << "4. Palindrome Number Check" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1: {
                int factorial = 1;

                cout << "Enter a number: ";
                cin >> n;

                for (int i = 1; i <= n; i++) {
                    factorial = factorial * i;
                }

                cout << "Factorial = " << factorial;
                break;
            }

            case 2: {
                bool prime = true;

                cout << "Enter a number: ";
                cin >> n;

                if (n <= 1)
                    prime = false;

                for (int i = 2; i < n; i++) {
                    if (n % i == 0) {
                        prime = false;
                        break;
                    }
                }

                if (prime)
                    cout << "Prime Number";
                else
                    cout << "Not a Prime Number";

                break;
            }

            case 3: {
                int original, remainder, sum = 0;

                cout << "Enter a number: ";
                cin >> n;

                original = n;

                while (n != 0) {
                    remainder = n % 10;
                    sum = sum + (remainder * remainder * remainder);
                    n = n / 10;
                }

                if (sum == original)
                    cout << "Armstrong Number";
                else
                    cout << "Not an Armstrong Number";

                break;
            }

            case 4: {
                int original, reverse = 0, remainder;

                cout << "Enter a number: ";
                cin >> n;

                original = n;

                while (n != 0) {
                    remainder = n % 10;
                    reverse = reverse * 10 + remainder;
                    n = n / 10;
                }

                if (reverse == original)
                    cout << "Palindrome Number";
                else
                    cout << "Not a Palindrome Number";

                break;
            }

            case 5:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while (choice != 5);

    return 0;
}