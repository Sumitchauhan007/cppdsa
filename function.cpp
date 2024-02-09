#include<iostream>
#include<math.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num){
    // Iterate from 2 to the square root of num
    for(int i=2; i<=sqrt(num); i++){
        // If num is divisible by i, it's not prime
        if(num%i == 0){
            return false;
        }
    }
    // If no divisor is found, num is prime
    return true;
}

int main(){
    // Declare variables to store the range [a, b]
    int a, b;

    // Input the range from the user
    cout << "Enter the range (two integers a and b): ";
    cin >> a >> b;

    // Iterate through all numbers in the range [a, b]
    for(int i=a; i<=b; i++){
        // Check if the current number i is prime using isPrime function
        if(isPrime(i)){
            // If i is prime, print it to the console
            cout << i << endl;
        }
    }

    // Indicate successful execution by returning 0
    return 0;
}
