#include <iostream>
using namespace std;

int main()
{
    // Input the size of the array
    int n;
    cin >> n;

    // Declare an array of size n
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }   

    // Counter variable for the number of passes
    int counter = 1;

    // Outer loop for the number of passes
    while (counter < n)
    {
        // Inner loop for comparing and swapping elements
        for (int i = 0; i < n - counter; i++)
        {
            // Compare adjacent elements and swap if necessary
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }

        // Increment the counter after each pass
        counter++;
    }

    // Output the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        cout << endl; // Move to the next line after printing each element
    }

    return 0;
}
