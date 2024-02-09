#include<iostream>
using namespace std;

// Function to perform linear search on an array
int linearSearch(int arr[], int n, int key) {
    // Iterate through the array elements
    for (int i = 0; i < n; i++) {
        // Check if the current element is equal to the key
        if (arr[i] == key) {
            // If a match is found, return the index of the element
            return i;
        }
    }
    // If key is not found, return -1
    return -1;
}

// Main function
int main() {
    // Input the size of the array
    int n;
    cin >> n;

    // Declare an array of size n
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the key element to search
    int key;
    cin >> key;

    // Call the linearSearch function and print the result
    cout << linearSearch(arr, n, key) << endl;

    return 0;
}
