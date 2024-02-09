#include<iostream>
using namespace std;

int main(){
    // Declare a variable to store the size of the array
    int n;
    // Input the size of the array from the user
    cin >> n;

    // Declare an array of size 'n' to store elements
    int arr[n];

    // Input the elements of the array from the user
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Implement the Insertion Sort algorithm
    for(int i = 1; i < n; i++){
        // Store the current element to be compared
        int current = arr[i];
        // Initialize a variable 'j' to the index before 'i'
        int j = i - 1;

        // Compare the current element with the elements before it
        // Move the elements greater than 'current' to the right
        while (arr[j] > current && j >= 0){
            arr[j + 1] = arr[j];
            j--;
        }

        // Place 'current' in its correct position in the sorted part of the array
        arr[j + 1] = current;
    }

    // Output the sorted array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // Return 0 to indicate successful execution
    return 0;
}
