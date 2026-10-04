#include <iostream>
using namespace std;
// This program counts the number of positive numbers entered by the user until the user enters 0, using a 'while' loop and 'break' statement.
int main() {
    int n;
    int count = 0; 

    while (true) {
        cout << "Enter a number: ";
        cin >> n;

        if (n == 0) {
            break; 
        }

        if (n > 0) {
            count++; 
        }
    }

    cout << "Number of positive numbers entered: " << count << endl;
    return 0;
}
