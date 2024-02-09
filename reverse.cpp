#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; // Takes user input for the variable 'n'

    int reverse = 0; // Variable to store the reversed number

    while (n > 0)
    {
        int lastdigit = n % 10; // Extracts the last digit of 'n'
        reverse = reverse * 10 + lastdigit; // Builds the reversed number
        n = n / 10; // Removes the last digit from 'n'
    }

    cout << reverse << endl; // Prints the reversed number
    return 0; // Indicates successful program execution
}
