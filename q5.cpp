#include <iostream>
using namespace std;

int main() {
    float m1, m2, m3, m4, m5;
    float percentage;

    cout << "Enter marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    percentage = (m1 + m2 + m3 + m4 + m5) / 5;

    cout << "Percentage = " << percentage << "%" << endl;

    if (percentage >= 90) {
        cout << "Grade A - Distinction";
    }
    else if (percentage >= 75) {
        cout << "Grade B - First Division";
    }
    else if (percentage >= 60) {
        cout << "Grade C - Second Division";
    }
    else if (percentage >= 40) {
        cout << "Grade D - Pass";
    }
    else {
        cout << "Fail";
    }

    return 0;
}