#include "header.h"

using namespace std;

int main() {
   header();

    // Change values for a and b
    int a;
    int b;
    cout << "Enter a value for a: ";
    cin >> a;
    cout << "Enter a value for b: ";
    cin >> b;

    // Calculating the expression
    int result = 2 * a * 3 * b + 4 * a * b - 5 * a + 2 * b;

    // Output the result
    cout << "Result: " << result << endl;
    return 0;
}